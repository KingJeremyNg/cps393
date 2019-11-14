// Student Name: Jeremy Ng
// Student Number: 500882192
// I certify that this lab is entirely my own work.

#include "assign2funcs.h"
#include "assign2funcs.c"

int main(void)
{
    double array[size]; // Array to store vector and calculate normalized vector.
    char input[size];   // Array to store user input.
    int num;            // Variable to store the size of the vector.
    int count;          // Variable to store a counter that increments by 1.
    double n;           // Variable to store n when calculating for normalized vector.
    int errorFlag = 0;  // Variable to store errorFlag for exiting.

// Start of loop by accepting first number of elements in array.
START:
    printf("\nEnter your vector. 0 to exit program.\n");
    scanf("%s", &input);

    if (numChecker(input))
    {
        num = intCast(*input);
        if (num == 0)
        {
            goto END;
        }
        else if (num < 0 || num > 9)
        {
            goto INVALID;
        }
    }
    else
    {
        goto INVALID;
    }

    goto INPUT;

// Print BAD INPUT, ignore excess input and set error flag to 1.
INVALID:
    printf("\nBAD INPUT\n");
    fflush(stdin);
    errorFlag = 1;
    goto START;

// Accept input for all elements in vector of size num.
// If any false inputs then goto INVALID label.
// Print the vector then goto NORMALIZE label.
INPUT:
    count = 0;
    while (count < num)
    {
        scanf("%s", &input);
        if (doubleChecker(input) && inputChecker(input))
        {
            array[count] = atof(input);
        }
        else
        {
            goto INVALID;
        }
        count++;
    };
    fflush(stdin);

    printf("\nVECTOR: [ ");
    for (int i = 0; i < num - 1; i++)
    {
        printf("%.3f, ", array[i]);
    }
    printf("%.3f ] ", array[num - 1]);
    goto NORMALIZE;

// Calculate length, n then proceed to normalize the array and print it.
// If n = 0, then NORMALIZED vector prints out zeros.
// Restart at the end of process by going to START label.
NORMALIZE:
    n = 0;

    for (int i = 0; i < num; i++)
    {
        n += array[i] * array[i];
    }
    n = sqrt(n);

    printf("NORMALIZED: [ ");
    if (n == 0)
    {
        for (int i = 0; i < num; i++)
        {
            printf("0.000, ");
        }
    }
    else
    {
        for (int i = 0; i < num - 1; i++)
        {
            array[i] = array[i] / n;
            printf("%.3f, ", array[i]);
        }
    }

    printf("%.3f ]\n", array[num - 1] / n);
    goto START;

// Label to print and exit with error flag.
END:
    printf("\nClosing program...\n\n");
    exit(errorFlag);
}