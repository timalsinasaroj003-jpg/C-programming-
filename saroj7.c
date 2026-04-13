/*c program to read a character from the user and print in Ascii value*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("The ASCII value of the character is: %d", ch);
    /*american standard code for information interchange*/
    /* it is used for numerical reprentation in computer */
    return 0;
}