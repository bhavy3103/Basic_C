#include <stdio.h>
// Write a C program to find lcm of two nu
int main()
{
    int n1, n2, max;
    printf("Enter the Value of two positive number which you have to find LCM:  ");
    scanf("%d %d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;
    while (max!=0)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            printf("LCM of two number %d %d=%d", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}