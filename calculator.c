#include <stdio.h>
// Write a C program to define
int main()
{
    double n1, n2;
    char operator;
    printf("Enter the Operator (+,-,*,/): ");
    scanf("%c", &operator);
    printf("Enter the Two values: ");
    scanf("%lf %lf", &n1, &n2);
    switch (operator)
    {
    case '+':
        printf("%.1lf+%.1lf=%.1lf", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%.1lf-%.1lf=%.1lf", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%.1lf*%.1lf=%.1lf", n1, n2, n1 * n2);
        break;
    case '/':
        printf("%.1lf/%.1lf=%.1lf", n1, n2, n1 / n2);
        break;

    default:
        printf("Enter character is not valid");
        break;
    }
}