// Write a C program to find highest frequency character in an input string.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_STRING_LENGTH 1000

int main()
{
    char inputString[MAX_STRING_LENGTH];
    int frequency[128] = {0}; // Array to store frequency of each character

    // A-Z 65-90
    // a-z 97-122
    // 0-9 48-57

    int maxFrequency = 0;
    char highestChar;

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int len = strlen(inputString), ascii;

    // Count frequency of each character
    for (int i = 0; i < len; i++)
    {
        ascii = (int)inputString[i];
        frequency[ascii] += 1;
    }

    // Find the character with the highest frequency
    for (int i = 0; i <= 127; i++)
    {
        if (frequency[i] > maxFrequency)
        {
            maxFrequency = frequency[i];
            highestChar = i;
        }
    }

    // Print the result
    printf("The highest frequency character is '%c' with a frequency of %d.\n",
           highestChar, maxFrequency);

    return 0;
}
