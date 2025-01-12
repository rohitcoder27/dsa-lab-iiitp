// Write a C program to replace each vowel with the next vowel in an input string. Replace a with e,
// e with i, i with o, o with u and u with a. Example: if input is IIITPune, output will be OOOTPani.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 1000

char next_vowel(char c)
{

    switch (c)
    {
    case 'a':
        return 'e';
    case 'e':
        return 'i';
    case 'i':
        return 'o';
    case 'o':
        return 'u';
    case 'u':
        return 'a';
    case 'A':
        return 'E';
    case 'E':
        return 'I';
    case 'I':
        return 'O';
    case 'O':
        return 'U';
    case 'U':
        return 'A';
    default:
        return c;
    }
}

void replace_vowels(char *input)
{
    int length = strlen(input);
    char output[MAX_LENGTH];

    for (int i = 0; i < length; i++)
    {
        output[i] = next_vowel(input[i]);
    }

    printf("Modified string: %s\n", output);
}

int main()
{
    char input[MAX_LENGTH];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    replace_vowels(input);

    return 0;
}
