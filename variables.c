#include<stdio.h>
#include <stdbool.h>
int main ()
{
    //variable= a reusable container for a value.
    // behaves as if it were the value it contains.

    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires ‹ stdbool.h›)

    int age =25;
    float gpa=2.5;// for decimal values
    double pi=3.23537882;
    //double is like a long float hence its format specifier is lf and also it can store 15 to 16 values
    char symbol='A';//format specifier is %c
    char name[]="Bro Code";//its format specifer is %s and this is syntax used to declare strings
    //strings dont have a direct suyntax they need to be used with array of characters to use it as string


    //for boolean varibale we need to include another header file....that is #include <stdbool.h>
    bool isonline=true; //format specifier is %d
    //instead of using 1 or 0 we can use true or false respectively or vice versa
    
    printf("You are %d years old\n", age);
    printf("Gpa is eqal to %f",gpa);
    printf("Gpa is eqal to %lf",pi);

return 0;
}