#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

bool isInt(char *s) {
    int i, length;

    length = strlen(s);

    if (length > 0 && s[0] != '-' && !isdigit(s[0])) {
        return false;
    }

    for (i = 1; i < length; i++) {
        if (!isdigit(s[1])) {
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[]) {
    FILE *f1, *f2;
    int x, line;

    if (argc != 4) {
        printf("Wrong usage");
        return(0);
    }

    if (!isInt(argv[1])) {
        printf("Invalid number");
        return(0);
    }
    
    x = atoi(argv[1]);

    if ((f1 = fopen(argv[2], "r")) == NULL) {
        printf("Not a valid file %s", argv[2]);
        return(0);
    }

    if ((f2 = fopen(argv[3], "w")) == NULL) {
        printf("Not a valid file %s", argv[3]);
        return(0);
    }

    while (fscanf(f1, "%d", &line) != EOF) {
        fprintf(f2, "%d\n", line + x);
    }

    fclose(f1);
    fclose(f2);

    return(0);
}