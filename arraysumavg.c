#include <stdio.h>
#include <math.h>
// array is group of variable   start from 0
int main()
{
    int n, i, sum = 0;
    printf("Enter the number of value here n: ");
    scanf("%d", &n);
    float avg;
    int a[n];

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter Integer value %d: ", i);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / 10.0;
    printf("\nsum is %d", sum);
    printf("\naverage is %0.2f", avg);
    return 0;
}