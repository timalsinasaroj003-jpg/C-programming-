/*c program to read a float number and display it up to 2 decimal places USING FORMAT SPECIFIERS*/
#include<stdio.h>
int main()
{
    float num;
    printf("Enter a float number: ");
    scanf("%f", &num);
    printf("The number is: %.2f\n", num);
    return 0;
}