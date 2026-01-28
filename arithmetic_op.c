#include<stdio.h>
int main ()
{
//arithmetic operators =+-*/% ++ --
int x=2;
int y=3;
int z=0;
z=x+y;
printf("%d",z);
//yaha par hum division wale ka use karenge to vo preceding integer ki value show karega uss me so we need to use the floating variable in place of the variable by which we are dividing something...to get a floating value
//as without the modification of the variable datatype it will be integer division... 
x+=2;//this eans x=x+2
//and 
x++;//this means x=x+1
return 0;
}