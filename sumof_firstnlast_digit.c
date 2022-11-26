#include<stdio.h>
#include<conio.h>
    // Write a C Program to find Sum of First and Last digit of given number
    int main()
    {
      int n,rem,sum=0;
      scanf("%d",&n);
      while(n>=10)
      {
          rem=n%10;
          sum=sum+rem;
          n=n/10;
      }
      printf("%d",sum);
      return 0;
    }
