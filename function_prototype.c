#include<stdio.h>
#include <stdbool.h>

void hello(char name[], int age);
//this above declaration of the function is called the prototype of the function

int main ()
{
    // function prototype = Provide the compiler w/ information about a function's:
// name, return type, and parameters before its actual definition.
// Enables type checking and allows functions to be used before
// they're defined.
// Improves readability, organization, and helps prevent errors.

return 0;
}
void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}
//this means that if the prototype of the function was not written it wont be able to use the function before fully defining it, hence if we want to use the function and call it before defining we have to use the function prototye

