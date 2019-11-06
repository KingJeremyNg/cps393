#include <stdio.h>

int main(void) {
    int array[999];
    int i = 0;
    char temp;

    printf("Enter your values: ");
    do {
        scanf("%d%c", &array[i], &temp);
        i ++;
    } while (temp != '\n');
    
    for (int index = 0; index < i; index ++) {
        printf("%d\n", array[index]);
    }
}