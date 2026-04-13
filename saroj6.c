/*c program using a character getchar() and display it using putchar()*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    /*function that read a single character from the keyboard */
    printf("The character you entered is: ");
    putchar(ch);
    /*is a function that displays a character on the screen */
    return 0;
}