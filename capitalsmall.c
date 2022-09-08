#include <stdio.h>
#include <conio.h>

// write a c program to find enterd character is capital,small,digit or any special cases
// here ch is a variable, not for character

int main()
{
    char ch;
    printf("\nEnter Any Character :");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
     printf("\n Entered Character is Digit");
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
    printf("\n Entered Character is Capital Letter");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("\n Entered Character is Small Letter");
    }
    else
    {
        printf("\n Entered Character is Special Character");
    }
    return 0;
}