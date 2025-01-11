// Write a program in C to check if a given string is a palindrome or not.
// a. By using reverse of the given string
// b. Without using the reverse of the given string

#include <stdio.h>
#include <string.h>

int main()
{

    // a

    char str[100] = "saippuakivikauppias";

    char reversed_str[100];
    int len = strlen(str);

    for (int i = (len - 1); i >= 0; i--)
    {
        // printf("(%c)", str[i]);
        reversed_str[len - i - 1] = str[i];
    }
    reversed_str[len] = '\0';

    int if_palindrome = strcmp(str, reversed_str);

    printf("%d", if_palindrome);

    // b

    char palin[100] = "madam";

    len = strlen(palin);

    int i = 0, j = len - 1;

    // if_palindrome = 0 means string is palindrome
    // if_palindrome = 1 means string is not palindrome
    if_palindrome = 0;
    while (i < j)
    {
        if (palin[i] != palin[j])
        {
            if_palindrome = 1;
            break;
        }

        i++;
        j--;
    }

    printf("%d", if_palindrome);

    return 0;
}