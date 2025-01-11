#include <stdio.h>

size_t strlen(char *string)
{

    // loop over chars till it reaches null

    char *iter = string;

    size_t len = 0;

    while (*iter != '\0')
    {
        len++;
        iter++;
    }

    return len;
}
int main()
{

    char str1[] = "Rohit ";
    char str2[] = "Prashik !";

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    // Prashik -- Prashik
    printf("%d -- %d \n", len1, len2);

    return 0;
}