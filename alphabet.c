#include <stdio.h>
// Write a C program to print all letter of alphabet in both upper or lower case
int main()
{
    char i;
    printf("All Upper Alphabet is: ");
    for (i = 'A'; i <= 'Z'; i++)
       printf("%c ", i);

    printf("\nAll lower Alphabet is: ");
    for (i = 'a'; i <= 'z'; i++)
    printf("%c ", i);
    return 0;
}