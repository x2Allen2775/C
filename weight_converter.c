#include<stdio.h>
int main ()
{
    char what;
    float k=0.00;
    float p=0.00;
    float result=0.00;
    printf("Pls enter you weight choice from which you are converting (P/K): " );
    scanf("%c",&what);
    if(what=='k'||what=='K'){
        printf("Pls enter the weight in Kilogram: ");
        scanf("%",&k);
        result=2.2*k;
        priintf("In pounds it is %f\n",result);


    }
    if(what=='p'||what=='P'){
        printf("Pls enter the weight in Pounds: ");
        scanf("%",&p);
        result=p/2.2;
        priintf("In kilogram it is %f\n",result);
        

    }
    else{
        printf("pls enter an appropriate value\n");
    }
return 0;
}   