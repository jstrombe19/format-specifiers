#include <stdio.h>

// format specifiers dictate the format applied to the output of a particular function
// printf, for example, will show the results of the expressions to the terminal. 
// by supplying a format specifier, C knows to compile the output in the format requested


int main(void) {
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolVar = 0;

    printf("integerVar = %i\n", integerVar);
    printf("integerVar = %d\n", integerVar);
    printf("doubleVar as an integer = %d\n", doubleVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);

    printf("boolVar = %i\n", boolVar);

    return 0;
}