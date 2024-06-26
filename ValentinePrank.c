#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char alpha[] = "1abcdefghijklmnopqrstuvwxyz?, ABCDEFGHIJKLMNOPQRSTUVWXYZ<3";
    char love[] = "I Love U Cute head will you be my Valentine <3?";
    char kidding[] = "Just kidding, no Valentine for you homie XD     ";
    int k = strlen(kidding);
    
    for (char *ptr = love; *ptr != '\0'; ptr++) {
        char *p = alpha;
        while (*p != *ptr) {
            printf("\b%c", *(++p));
            fflush(stdout);
            usleep(1e4);
        }
        printf("%c", *p);
        fflush(stdout);
        usleep(110000);
    }
    
    char *ptr = kidding;
    while (*ptr != '\0') {
        ptr++;
    }
    ptr--;
    for (; ptr >= kidding; ptr--) {
        char *p = alpha;
        while (*p != *ptr) {
            printf("\b%c", *(++p));
            fflush(stdout);
            usleep(1e4);
        }
        printf("\b\b%c", *p);
        fflush(stdout);
        usleep(110000);
    }

    return 0;
}