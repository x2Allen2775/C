#include<stdio.h>

void numspaw(int* a, int* b);

int main ()
{
    int a=4;
    int b=6;
    int *pA=&a;
    int *pB=&b;
    numspaw(pA, pB);
    printf("%d",a);
    printf("%d",b);


return 0;
}
void numspaw(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
