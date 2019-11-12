#include "assign2funcs.h"
#include "assign2funcs.c"

int main(void) {
    int array[size];
    char string[size];

    printf("Enter shit\n");
    fgets(string, sizeof(string), stdin);
    printf("You entered: %s", string);

    return 0;
}