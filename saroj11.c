/* write a program to demonstrate the use of escape sequences */
#include<stdio.h>
int main()
{
    printf("Hello\tWorld\n");
    /*tab space\t and new line\n */
    printf("This is a backslash: \\ \n");
    /*//print single backlash*/
    printf("This is a single quote: \' \n");
    /*\'print a single quotation mark inside a character or string */
    printf("This is a double quote: \" \n");
    /* used to print "hello" inside the string*/
    printf("This is a form feed: \f \n");
    /*moves the cursur to the next page */
    printf("This is a carriage return: \r \n");
    /*moves the cursor to the same line not to the next line*/
    
    /*\b ;used to give backspace*/
    printf("This is a backspace character: \b \n");
    /*\a: used to produce a beep sound*/
  
    return 0;
}  