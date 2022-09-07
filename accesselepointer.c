#include <stdio.h>
#include <math.h>
#include <string.h>
// Write a C program to
int main()
{
    int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int i, *p;
    p = &a[0];
    for (i = 0; i < 10; i++)
    {
        printf("Value at a position %d is %d \n", i + 1, *(p + i));
    }
    return 0;
}