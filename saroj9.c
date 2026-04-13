/* c program to read a character and check whether it is uppercase or lowercase then display  result using scan f */
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
        printf("The character is uppercase.");
    else if(ch >= 'a' && ch <= 'z')
        printf("The character is lowercase.");
    else
        printf("The character is neither uppercase nor lowercase.");
    return 0;
}