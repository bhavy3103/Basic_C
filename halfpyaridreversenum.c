#include<stdio.h>
#include<conio.h>
// Write a C program to print pattern of half Pyramid with Number
int main()
{
    int i,j,row=5;
    scanf("%d",&row);
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}