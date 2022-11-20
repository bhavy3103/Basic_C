#include <stdio.h>
// Write a C program to print pattern of full pyramid with *
int main()
{
    int i, j, row = 5, sp;
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (sp = 1; sp <= row - i; sp++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}