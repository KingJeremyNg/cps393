#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int timefunction(void)
{
    struct tm ok;

    printf("%d\n", ok.tm_hour);
    printf("%d\n", ok.tm_mday);
    printf("%d\n", ok.tm_mon);
    printf("%d\n", ok.tm_year);

    return(0);
}

int oddArg(int argc, char **argv) {
    for (int i = 0; i < argc; i++) {
        if ((i % 2) == 1) {
            printf("%s ", argv[i]);
        }
    }
    printf("\n");
    return(0);
}

int concatenate(void) {
    char string1[100], string2[100], cat[200];
    int count;
    scanf("Enter String1: %s", string1);
    scanf("Enter String2: %s", string2);

    for
}