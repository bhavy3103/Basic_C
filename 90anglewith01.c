#include <stdio.h>
#include <conio.h>
// write a C Program to make pattern of right angle with 0 and 1
int main()
{
    int row, i, j;
    printf("Please enter the Number of row : ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }
}
