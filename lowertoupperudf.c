#include <stdio.h>
#include <math.h>
#include <string.h>
// Write a C program to convert only lower case letterrs into upper cas letters.
char str[1000];
int lower()
{
    int i, n, l;
    l = strlen(str);
    for (i = 0; i <= l; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("String into upper case is -->> %s", str);
}
int main()
{
    printf("Enter the string here: ");
    gets(str);
    lower();
    return 0;
}