#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("Enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    a>b? a>c?printf("first value is biggest:%d",a):printf("third value is biggest:%d",c): b>c?printf("second value is biggest:%d",b):printf("third value is biggest:%d",c);
}  






