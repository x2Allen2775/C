#include<stdio.h>
int main ()
{
//array=A fixed size collection of elements of the same data type
//(similar to a avriable, but it holds more than 1 value)
int number[]={10, 20 , 30, 40, 50};
printf("%d", number[0]);
//to assign a particular value..
number[0]=100;
//when iterationg over the arrays the max value of the counter value i can be defined as ssizeof(arrayname)/sizeof(arraynumber[0])
//the garbage value are the values stored from the previous program
// and to prevent showcasing of the garbage vaue we need to first partially initialize the arraylike
//array name[5]={0};
//now all the 5 values will be shown 5

return 0;
}