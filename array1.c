#include <stdio.h>
#include <conio.h>
int main()

{
    int i, j, k, row, l = 1;
    printf("Enter the number of row:");
    scanf("%d", &row);
    printf("Pyramid pettern\n");

    for (i = 1; i <= row; i++)
    {

        for (j = 1; j <= row - i; j++)
        {
            printf(" ");
            for (k = 1; k <= i; k++, l++)
            {
                printf("%d ", l);
            }
        }

        printf("\n");
    }
    return 0;
}