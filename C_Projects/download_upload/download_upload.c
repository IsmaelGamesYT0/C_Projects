#include <stdio.h>
#include <unistd.h>

int main()
{
    int download = 1;
    int upload = 1;

    while (download <= 100 && upload <= 100)
    {
        printf("Download: %d%%  Upload: %d%%\n",download, upload);
        download += 1;
        upload += 1;
        sleep(1);
    }
}
