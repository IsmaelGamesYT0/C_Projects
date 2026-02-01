#include <stdio.h>
#include <unistd.h>

int main(void) {
    for(int i = 1; i <= 1000; i++) {
        printf("%d\n", i);
        usleep(10000);
    }
}