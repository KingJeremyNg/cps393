#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

#define MAX 100

int main(void) {
    char string[MAX], change[MAX], reverse[MAX], letter;
    int i, length, count;

    printf("Enter String: ");
    scanf("%s", string);
    printf("Enter Character: ");
    scanf("%s", &letter);

    length = sizeof(string);

    count = 0;
    for (i = 0; i < length; i++) {
        if (string[i] != letter) {
            change[count] = string[i];
            count ++;
        }
    }

    printf("%s", change);

    return(0);
}