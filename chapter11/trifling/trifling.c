#include <csapp.h>

/**
 * 一个小型web服务器，提供静态服务和动态服务，动态服务的目录为cgi-bin
 */

void doit(int fd);
void read_requesthdrs(rio_t *rp);
void clienterror(int fd, char *cause, char *errnum,char *shortmsg, char *longmsg);
int parse_uri(char *uri,char *filename,char *cgiarg);
void serve_static(int fd,char *filename,int filesize);
void get_filetype(char *filename,char *filetype);
void serve_dynamic(int fd,char *filename,char *cgiarg);

int main(int argc, char const* argv[])
{
    int listenfd,connfd;
    socklen_t clientlen;
    char hostname[MAXLINE],port[MAXLINE];
    struct sockaddr_storage clientaddr;

    if(argc != 2) {
        fprintf(stderr, "usage: %s <port>\n",argv[0]);
        exit(0);
    }

    listenfd = Open_listenfd(argv[1]);
    while (1) {
        clientlen = sizeof(clientaddr);
        connfd = Accept(listenfd,(SA *)&clientaddr,&clientlen);
        Getnameinfo((SA *)&clientaddr,clientlen,hostname,MAXLINE,port,MAXLINE,0);
        printf("connection from %s:%s\n", hostname,port);
        doit(connfd);
        Close(connfd);
    }
    return 0;
}

/*
 * doit - handle a http request
 */
void doit(int fd){
    struct stat sbuf;
    rio_t rio;
    char buf[MAXLINE],filename[MAXLINE],cgiarg[MAXLINE];
    char method[MAXLINE],uri[MAXLINE],version[MAXLINE];
    int isStatic;

    Rio_readinitb(&rio,fd);
    if(!Rio_readlineb(&rio,buf,MAXLINE))
        return;
    printf("%s",buf);
    sscanf(buf,"%s %s %s",method,uri,version);
    if(strcasecmp("GET",method)){  // 只支持GET方法
        clienterror(fd,method,"501","Not Implemented","Trifling does not implement this method");
        return;
    }

    read_requesthdrs(&rio);

    // 为GET请求解析文件名和cgi参数
    isStatic = parse_uri(uri,filename,cgiarg);
    if(stat(filename,&sbuf)){
        clienterror(fd,filename,"404","Not Found","Trifling could'n find this file");
        return;
    }

    if(isStatic) {
        if(!(S_ISREG(sbuf.st_mode)) || !(sbuf.st_mode & S_IRUSR)){
            clienterror(fd,filename,"403","Forbidden","Trifling couldn't read this file");
            return;
        }
        serve_static(fd,filename,sbuf.st_size);
    } else{
        if(!(S_ISREG(sbuf.st_mode)) || !(sbuf.st_mode & S_IXUSR)) {
            clienterror(fd,filename,"403","Forbidden","Trifling couldn't run the CGI program");
            return;
        }
        serve_dynamic(fd,filename,cgiarg);
    }
}

/*
 * sigchld_handler - handler for SIGCHLD
 */

void sigchld_handler(int sig){
    int pid;
    while((pid = wait(NULL)) != -1) {
        Sio_puts("reap child\n");
    }
    if(errno != ECHILD){
        unix_error("Reap child error");
    }
}


/*
 * serve_dynamic - 动态服务，设置好环境后，fork出新进程运行指定程序
 */
void serve_dynamic(int fd,char *filename,char *cgiarg){
    char buf[MAXLINE],*emptylist[] = { NULL };

    /* Send response header to client */
    sprintf(buf,"HTTP/1.0 200 0K\r\n");
    Rio_writen(fd,buf,strlen(buf));
    sprintf(buf,"Server: Trifling Web Server\r\n");
    Rio_writen(fd,buf,strlen(buf));

    Signal(SIGCHLD,sigchld_handler);

    if(Fork() == 0){   // Child
        //Signal(SIGCHLD,SIG_DFL);
        setenv("QUERY_STRING",cgiarg,1); // 设置参数的环境变量，真实的server会设置很多的环境变量
        Dup2(fd,STDOUT_FILENO);   // stdout 重定到连接fd
        Execve(filename,emptylist,environ);
    }
    //Wait(NULL);  /* Parent waits for and reaps the child */
}

/*
 * serve_static - 静态请求，读取本地文件返回给客户端
 */
void serve_static(int fd,char *filename, int filesize) {
    char *ptr,buf[MAXBUF],filetype[MAXLINE];
    int srcfd;

    /* Send response header to client */
    get_filetype(filename,filetype);
    sprintf(buf,"HTTP/1.0 200 OK\r\n");
    sprintf(buf,"%sServer: Trifling Web Server\r\n",buf);
    sprintf(buf,"%sConnection: Close\r\n",buf);
    sprintf(buf,"%sContent-length: %d\r\n",buf,filesize);
    sprintf(buf,"%sContent-type: %s\r\n\r\n",buf,filetype);
    Rio_writen(fd,buf,strlen(buf));

    /* print in server */
    printf("Response headers:\n");
    printf("%s", buf);

    if(Fork() == 0){
        /* Send response body to client */
        srcfd = Open(filename,O_RDONLY,0);
        ptr = (char *)Mmap(NULL,filesize,PROT_READ,MAP_PRIVATE,srcfd,0);
        Close(srcfd);
        if(rio_writen(fd,ptr,filesize) == -1 ){
            fprintf(stderr, "write error %s\n",strerror(errno));
        }
        Munmap(ptr,filesize);
        return;
    }
    return;
}

/*
 * serve_video - 为视频文件
 */
//void serve_video(int fd,char *)
/*
 * get_filetype - 根据给定文件名给出它所属的MIME类型
 */
void get_filetype(char *filename,char *filetype) {
    if(strstr(filename,".html"))
        strcpy(filetype,"text/html");
    else if(strstr(filename,".gif"))
        strcpy(filetype,"image/gif");
    else if(strstr(filename,".jpg"))
        strcpy(filetype,"image/jpg");
    else if(strstr(filename,".png"))
        strcpy(filetype,"image/png");
    else if(strstr(filename,".mpg"))
        strcpy(filetype,"video/mpg");
    else if(strstr(filename,".webm"))
        strcpy(filetype,"video/webm");
    else if(strstr(filename,".mp4"))
        strcpy(filetype,"video/mp4");
    else if(strstr(filename,".rmvb"))
        strcpy(filetype,"video/rmvb");
    else if(strstr(filename,".mkv"))
        strcpy(filetype,"video/mkv");
    else
        strcpy(filetype,"text/plain");
    return;
}

/*
 * read_requesthdrs - 读入并忽略请求头
 */
void read_requesthdrs(rio_t *rp) {
    char buf[MAXLINE];
    Rio_readlineb(rp,buf,MAXLINE);
    while(strcmp("\r\n",buf)){
        printf("%s", buf);
        Rio_readlineb(rp,buf,MAXLINE);
    }
    printf("%s",buf);
    return;
}

/*
 * pase_uri - 解析uri，返回请求的文件路径名，以及cgi程序的参数.如果是静态请求，返回1;动态请求则返回0
 */
int parse_uri(char *uri,char *filename,char *cgiarg){
    char *ptr,filetype[MAXLINE];
    if(strstr(uri,"cgi-bin")){  // Danamic Request
        ptr = index(uri,'?');
        if(ptr){
            *ptr = '\0';
            strcpy(cgiarg,ptr+1);
        } else
            strcpy(cgiarg,"");
        strcpy(filename,".");
        strcat(filename,uri);
        return 0;
    } else {        // Static Request
        get_filetype(uri,filetype);
        if(!strstr(filetype,"video")){  // Not video file
            strcpy(cgiarg,"");
            strcpy(filename,".");
            strcat(filename,uri);
            if(uri[strlen(uri)-1] == '/'){
                strcat(filename,"index.html");
            }
        } else {  // Video file
            strcpy(cgiarg,"");
            strcpy(filename,uri+1);  // uri+1 to skip the leading '/'

            char cmd[MAXLINE],*filepath=NULL;
            int len = 0;
            char *ptr = rindex(filename,'.');
            *ptr = '\0';
            sprintf(cmd,"find . ~/video /media/ox/software/BaiduYunDownload/movie -type f -iname *%s.*",filename);
            FILE *f = Popen(cmd,"r");
            if(getline(&filepath,&len,f) == -1){
                filepath = uri;
            }
            ptr = index(filepath,'\n');
            if(ptr)
                *ptr = '\0';
            Pclose(f);
            strcpy(filename,filepath);
        }
        return 1;
    }
}


/*
 * clienterror - returns an error message to the client
 */
/* $begin clienterror */
void clienterror(int fd, char *cause, char *errnum,char *shortmsg, char *longmsg)
{
    char buf[MAXLINE], body[MAXBUF];

    /* Build the HTTP response body */
    sprintf(body, "<html><title>Tiny Error</title>");
    sprintf(body, "%s<body bgcolor=""ffffff"">\r\n", body);
    sprintf(body, "%s%s: %s\r\n", body, errnum, shortmsg);
    sprintf(body, "%s<p>%s: %s\r\n", body, longmsg, cause);
    sprintf(body, "%s<hr><em>The Tiny Web server</em>\r\n", body);

    /* Print the HTTP response */
    sprintf(buf, "HTTP/1.0 %s %s\r\n", errnum, shortmsg);
    Rio_writen(fd, buf, strlen(buf));
    sprintf(buf, "Content-type: text/html\r\n");
    Rio_writen(fd, buf, strlen(buf));
    sprintf(buf, "Content-length: %d\r\n\r\n", (int)strlen(body));
    Rio_writen(fd, buf, strlen(buf));
    Rio_writen(fd, body, strlen(body));
}
/* $end clienterror */
