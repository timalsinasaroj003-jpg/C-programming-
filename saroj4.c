/*c program to use of typedef*/
#include <stdio.h>
/*give a schortcut name to datatype */
  /*existing data type so that code become shorter clearer and easier to read*/

int main() {typedef     int Int;
typedef float Float;

    Int age = 25;
    Float height = 5.8;

/* for example if we havw to write unsigned long int we can use typedef to make shortcut*/
/* for ex if have to write unsigned long int x=1000; then we can wrie typedef typedef int uli;*/

    printf("Age: %d\n", age);
    printf("Height: %f\n", height);

    return 0;
}