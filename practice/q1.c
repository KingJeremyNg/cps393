#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *file;
    int ch, lines;

    if ((file = fopen(argv[1], "r")) == NULL)
    {
        printf("%s is NOT a readable file\n", argv[1]);
        return (0);
    }

    lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }
    }

    printf("%s is a readable file with %d lines\n", argv[1], lines);
    return (0);
}
