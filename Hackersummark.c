#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
// Write a C program to
int main()
{
    int i, j = 0, n;
    char s;
    scanf("%d\n", &n);

    int a[n];

    for (i = 1; i <= n; i++)
    {
        scanf("%d\n", &a[i]);
    }
    j = a[1] + a[n];

    printf("%d", j);

    return 0;
}