#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n, *A;

    scanf("%d", &n);

    A = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    fflush(stdin);

    printf("A in reverse is: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", A[i]);
    }

    printf("\nBytes used by A: %d\n", n * sizeof(int));

    return (0);
}