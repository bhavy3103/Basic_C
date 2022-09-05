#include<stdio.h>
#include<conio.h>
int main()
{
    // Write a program to define digit is even or odd
    int i;
    printf("Enter the value of i : ");
    scanf("%d", &i);
    {
    if (i%2==0)
    printf("Last digit of number is Even");
    else
    printf("Last digit of number is Odd");
    }
    return 0;
}