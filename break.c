#include<stdio.h>
#include<conio.h>
    // Write a C program to execute break Statement
    int main()
    {
       int i,sum=0;
        for(i=1; ; i++)
        {
            sum=sum+i;
            if(sum>10)
            break;
            printf("%d\n",i);
        }
        return 0;
    }  