#include <stdio.h>
// Write a C program to find a factorial of number given by user
int main()
{
    int no, i = 1, fact = 1;
    printf("Please Enter the Number here no: ");
    scanf("%d", &no);
    for (i = 1; i <= no; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d is %d",no,fact);
    return 0;
}
