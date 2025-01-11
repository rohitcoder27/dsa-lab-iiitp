#include <stdio.h>

char *strcpy(char *destination_string, char *string_to_be_copied)
{

    // start reading from second string and copying each char
    // to first string pointerwise

    char *dest = destination_string;
    char *source = string_to_be_copied;

    while (*source != '\0')
    {
        *dest = *source;
        dest++;
        source++;
    }

    *dest = '\0';

    return destination_string;
}
int main()
{

    char str1[] = "Rohit ";
    char str2[] = "Prashik ";

    strcpy(str1, str2);

    // Prashik -- Prashik
    printf("%s -- %s \n", str1, str2);

    return 0;
}