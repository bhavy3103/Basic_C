#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
// Write a C program to change  the temperature celcius into ferenheat.
int main()
{
    float f,c;
    printf("Enter the tempereture in celcius: ");
    scanf("%f",&c);
    f=(float) 9*c/5 +32 ;
    printf("Temperature in ferenheat is : %0.2f",f);
    return 0;
}