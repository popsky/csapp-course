#include <csapp.h>

int main(int argc, char const* argv[])
{
    struct stat buf;
    if(stat("media/ox/software/BaiduYunDownload/movie/before_sunrise.mkv",&buf)){
        printf("can't find the file\n" );
        return 0;
    }
    printf("file size is %d\n", buf.st_size);

    return 0;
}
