// Write a C program to show the use of the following string library functions. You can use string.h
// a. strcat
// b. strcpy
// c. strlen
// d. strcmp

#include <stdio.h>
#include <string.h>

int main()
{

    // a. strcat

    char initial_string[100] = "Hello ";
    char string_to_be_concatenated[100] = "World!";

    // strcat being used here to append the second string `World! ` to initial string `Hello `
    // strcat will concatenate such that only first argument which is dest string will be modified
    strcat(initial_string, string_to_be_concatenated);

    printf("Concatenated string is %s \n", initial_string);

    // b. strcpy

    char source_string[20] = "Indian Institute ";
    char string_to_be_copied[30] = "Of Technology Kharagpur ";

    strcpy(source_string, string_to_be_copied);

    printf("%s \n", source_string);
    printf("%s \n", string_to_be_copied);

    // c. strlen

    size_t len1 = strlen(source_string);

    printf("%d\n", len1);

    // d. strcmp

    // strcmp compares each character by their ascii value

    char str1[] = "Rohit";
    char str2[] = "Prashik";
    char str3[] = "rohit";

    int res12 = strcmp(str1, str2);
    int res21 = strcmp(str2, str1);
    int res13 = strcmp(str1, str3);
    printf("%d     %d      %d ", res12, res21, res13);

    return 0;
}