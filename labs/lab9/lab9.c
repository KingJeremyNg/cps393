#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool inputChecker(char string[])
{
    float ignore;
    char c;
    if (sscanf(string, "%f %c", &ignore, &c) == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char *argv[])
{
    int num, input;

    if (argc != 2)
    {
        printf("bad input");
        return (0);
    }

    if (inputChecker(argv[1]))
    {
        num = atoi(argv[1]);
    }
    else
    {
        printf("bad input");
        return (0);
    }

    printf("Enter integer: ");
    while (scanf("%d", &input) != 0)
    {
        num += input;
        printf("%d", num);
        printf("\nEnter integer: ");
    }

    return (0);
}