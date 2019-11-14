// Student Name: Jeremy Ng
// Student Number: 500882192
// I certify that this lab is entirely my own work.

#include "assign2funcs.h"

// Function to check if input string contains any alpha characters then return false.
// If string length is greater than 1 then return false.
bool numChecker(char string[])
{
    if (strlen(string) > 1)
    {
        return false;
    }
    for (int i = 0; i < strlen(string); i++)
    {
        if (isalpha(string[i]))
        {
            return false;
        }
    }
    return true;
}

// Function to cast a character into an integer by subtracting its ASCII value by "0".
int intCast(char string)
{
    return (string - '0');
}

// Function to account for input such as -0.1abc.
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

// Function to check if input string is a valid double value.
bool doubleChecker(char string[])
{
    double temp = atof(string);
    if (temp == 0 && strcmp(string, "0"))
    {
        return false;
    }
    return true;
}