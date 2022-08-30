#include <stdio.h>

// Write a C program to
int main()
{
    char c;
    for (int i = 1; i < 256; i++)
    {
        printf("%d ) \" %c\"\n\n", i, i);
    }
    scanf("%c", &c);
    return 0;
}  