#include <stdio.h>
#include <stdlib.h>
#include "q3.h"

void PrintPart(NodeType *L, int x, int y)
{
    NodeType *ptr;
    int i;

    for (i = 1, ptr = L; i < x; i++) {
        ptr = ptr -> next;
    }

    for (i = x; i <= y; i++) {
        printf("%c", ptr -> ch);
        ptr = ptr -> next;
    }

    printf("\n");
}