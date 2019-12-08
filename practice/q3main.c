// DO NOT MODIFY THIS FILE!!!!

#include <stdio.h>
#include <stdlib.h>
#include "q3.h"

int main(void)
{
    NodeType *L;
    int x, y;
    L = SetUp();
    printf("L is: ");
    PrintAll(L);
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    printf("Nodes %d to %d of L are: ", x, y);
    PrintPart(L, x, y);
}