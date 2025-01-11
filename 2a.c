#include <stdio.h>

char *strcat(char *initial_string, char *string_to_be_concatenated)
{

    // start reading initial string till null
    // then start adding characters from second string till null
    // add null

    char *result = initial_string;

    while (*result != '\0')
    {
        // printf("(%c)", *result);
        result++;
    }

    char *source = string_to_be_concatenated;

    while (*source != '\0')
    {
        *result = *source;
        result++;
        source++;
    }
    *result = '\0';

    return result;
}
int main()
{

    char str1[] = "Rohit ";
    char str2[] = "Prashik ";

    strcat(str1, str2);

    printf("%s -- %s \n", str1, str2);

    return 0;
}