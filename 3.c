// Write a program in C to reverse and print a given string

#include <stdio.h>
#include <string.h>

int main()
{

    char str[100] = "RohitPrashik";

    char reversed_str[100];
    int len = strlen(str);

    for (int i = (len - 1); i >= 0; i--)
    {
        // printf("(%c)", str[i]);
        reversed_str[len - i - 1] = str[i];
    }
    reversed_str[len] = '\0';

    strcpy(str, reversed_str);

    printf("%s", str);
    return 0;
}