#include<stdio.h>
int main ()

{
//to find the string length through pointer arithmetic
    char input[50];
    int len=0;
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    //for making the pointer for the string do the following
    char *ptr=input;

    while(*ptr !='\0'){
        ptr++;
        len++;
    }
    if(input[len-1]=='\n'){
        len--;
    }
    printf("The length of the string of input is %d",len);
return 0;
}





/*Increment/Decrement of a Pointer
Increment: It is a condition that also comes under addition. When a pointer is incremented, it actually increments by the number equal to the size of the data type for which it is a pointer. 

For Example:
If an integer pointer that stores address 1000 is incremented, then it will increment by 4(size of an int), and the new address will point to 1004. While if a float type pointer is incremented then it will increment by 4(size of a float) and the new address will be 1004.


Decrement: It is a condition that also comes under subtraction. When a pointer is decremented, it actually decrements by the number equal to the size of the data type for which it is a pointer. 

For Example:
If an integer pointer that stores address 1000 is decremented, then it will decrement by 4(size of an int), and the new address will point to 996. While if a float type pointer is decremented then it will decrement by 4(size of a float) and the new address will be 996.

Addition of Integer to Pointer
When a pointer is added with an integer value, the value is first multiplied by the size of the data type and then added to the pointer.

For Example:
Consider the same example as above where the ptr is an integer pointer that stores 1000 as an address. If we add integer 5 to it using the expression, ptr = ptr + 5, then, the final address stored in the ptr will be ptr = 1000 + sizeof(int) * 5 = 1020.*/