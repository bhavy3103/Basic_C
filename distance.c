#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
// Write a C program to find total distance travel.
int main()
{
    float x, v, a, t;
    printf("Enter the value ofintial value of valocity here in m/s :  ");
    scanf("%f", &v);
    printf("Enter the value accelaration of here in m/s^2: ");
    scanf("%f", &a);
    printf("Enter time here in seconds: ");
    scanf("%f", &t);
    x = (v * t) + 0.5 * a * t * t;
    if (v > 80)
    {
        printf("stop the car\n");
        printf("Your car speed is more than 80 so you have to pay fine 200 ruppe");
    }
    printf("Total distance travel in %f seconds is = %0.2f", t, x);
    return 0;
}
