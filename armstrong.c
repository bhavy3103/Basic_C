#include<stdio.h>
// Write a C program to define number is Armstrong number or not
int main()
{
    int i,n,rem,ans=0;
    printf("Enter the number here: ");
    scanf("%d",&n);
    i=n;
    while(i !=0)
    {
        rem=i%10;
        ans=ans+(rem*rem*rem);
        i=i/10;
    }
     if(ans==n)
     printf("%d is an Armstong number",n);
     else
     printf("%d is not an Armstrong number",n);
     return 0;
}