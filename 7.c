// Write a C program to find first and last occurrences of a particular input character in an input
// string.

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 1000

int main()
{
    char inputString[MAX_STRING_LENGTH];
    char targetChar;
    int firstOccurrence = -1, lastOccurrence = -1;

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    printf("Enter a character to find first and last occurence for: ");
    scanf(" %c", &targetChar);

    // Find first occurrence
    for (int i = 0; i < strlen(inputString); i++)
    {
        if (inputString[i] == targetChar)
        {
            firstOccurrence = i;
            break;
        }
    }

    // Find last occurrence
    for (int i = strlen(inputString) - 1; i >= 0; i--)
    {
        if (inputString[i] == targetChar)
        {
            lastOccurrence = i;
            break;
        }
    }

    // Display results
    if (firstOccurrence != -1 && lastOccurrence != -1)
    {
        printf("First occurrence of '%c' is at position %d\n", targetChar, firstOccurrence + 1);
        printf("Last occurrence of '%c' is at position %d\n", targetChar, lastOccurrence + 1);
    }
    else if (firstOccurrence != -1)
    {
        printf("Character '%c' occurs only once at position %d\n", targetChar, firstOccurrence + 1);
    }
    else
    {
        printf("Character '%c' not found in the string\n", targetChar);
    }

    return 0;
}
