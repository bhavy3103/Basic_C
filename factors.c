#include <stdio.h>
// Write a C program to define find factors of given number
int main()
{
    int i, n;
    printf("Enter the Positive number Here: ");
    scanf("%d", &n);
    printf("Factors of %d are: ",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d,",i);
        }
    }

    return 0;
}