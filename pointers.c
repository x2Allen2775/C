#include <stdio.h>
//void birthday(int age);
void birthday(int*  age);
//here * is the dereferencing operator

int main() {

    // pointer = A variable that stores the memory address of another variable.
    //
    //         Benefit: They help avoid wasting memory by allowing you to pass
    //                  the address of a large data structure instead of copying the entire data.
    int age=25;
    //now firstly the format specifier for a pointer is p 
    //secondly to create a pointer we name it *pnameofthepointer=&nameofthevariable
    int *pAge=&age;
    printf("%p",&age);//actual memory address
    printf("%p",pAge);//pointer stored value which is the memory address of the variable
    //birthday(age);
    birthday(pAge);//we could directly send the input as &age instead of pAge they both are the same

    printf("%d",age);
    //this will give exact same value that is without incrimentation
    //as when we send the value to a function it means it is a pass by value means it gives copy of it hence to actually change we need to give the pass by yreference which can be done by giving them pointers as the input


    return 0;
}
//void birstday(int age){
void birstday(int* age){
    (*age)++;
}