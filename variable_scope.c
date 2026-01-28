#include<stdio.h>

int add(int x,int y){
    int result=x+y;
    return result;
}
int subtract(int x,int y){
    int result=x-y;
    return result;
}
int main ()
{
//variable scope= refers to where a variable is recognized and accessible
///variables can share the same name if
//they are in different scope{}
int result=add(3,4);
printf("%d", result);


return 0;
}
//this mean ek curcly braces or ek function ke andar same variable namaes nahi ho sakte but other than that tehy can be of same variable names
