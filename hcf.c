#include <stdio.h>
// Write a C program to define HCF of two number
int main()
{
    int n1, n2, i, hcf=1;
    printf("Enter the two number: ");
    scanf("%d %d", &n1, &n2);
    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        hcf  = i;
    }
    printf("HCF of %d and %d is %d", n1, n2, hcf);
    return 0;
}