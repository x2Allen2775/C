#include<stdio.h>
int main ()
{
    int num1;
    int num2;
    printf("Pls enter the first num.");
    scanf("%d",&num1);
    printf("Pls enter the second num.");
    scanf("%d",&num2);


    if(num1<num2){
        if(num2%num1==0){
            printf("GCD is %d",num1);
        }
        else 
        printf("GCD is 1");
    }
    else if(num2<num1){
        if(num1%num2==0){
            printf("GCD is %d",num2);
        }
        else 
        printf("GCD is 1");
    }

return 0;
}
