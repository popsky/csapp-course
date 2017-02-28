#include <csapp.h>

int main(int argc, char const* argv[])
{
    char *filename,buf[MAXBUF];

    if((filename = getenv("QUERY_STRING")) != NULL){
        sprintf(buf,"<html><head></head>\r\n");
        sprintf(buf,"%s<body><video width=\"640\" height=\"480\" controls> <source src=\"../%s\" type=\"video/webm\"></video></body>",buf,filename);
        sprintf(buf,"%s</html>\r\n",buf);
    }
    /* Make response header */
    printf("Connection: close\r\n");
    printf("Content-length: %d\r\n",(int)strlen(buf));
    printf("Content-type: text/html\r\n\r\n");
    printf("%s", buf);
    return 0;
}
