#include<stdio.h>
// Write a C program to calculate average and total of 5 students for 3 subject
int main()
{
    int i,j,m,n;
    float sum=0, avg=0;
    for ( i = 1; i <= 5; i++)
    {
        printf("Enter the number here: ");
        scanf("%d",&n);
        
        for(j=1;j<=3;j++)
        {
            scanf("%d",&m);
             sum=(float)sum+m;

        }
    }
    avg=sum/3.0;
    printf("%f %f",sum,avg);
    return 0;
}