#include<stdio.h>
#include<conio.h>
int main()
{ 
    int limit;
    float num, sum= 0;
    printf("Enter the limit\n");
    scanf("%d", &limit);
    printf("Enter %d numbers\n", limit);
    scanf("%f", &num);
    sum = sum+num;
    limit--;
   
    printf("sum of numbers is %d\n", sum);
    return 0;
}