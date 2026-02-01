#include <stdio.h>
#include <unistd.h>

int main() {

int download = 0;
int upload = 0;

    printf("Iniciando download e upload...\n");
    printf("\n");
    sleep(3);

do{
    
    printf("Download: %d%%  Upload: %d%%\n", download, upload);
    download += 1;
    upload += 1;
    sleep(1);

} while (download <= 100 && upload <= 100); 
    
    printf("\n");
    printf("Download e upload completos!\n");

}
