#include<stdio.h>
#include <math.h>
#include<string.h>
int num;
int n;
char str[20];
int sum=0;
int original;
void checker(int num,int n);
int main ()
{
    printf("Pls enter the number to check if it is armstrong or not: ");
    scanf("%d",&num);
    original=num;
    snprintf(str, sizeof(str), "%d", num);
    n=strlen(str);
    checker(num,n);


return 0;
}
void checker(int num,int n){
    while(num>0){
        int digit = num % 10;//to get the last digit
        sum += pow(digit, n);// to ppwer it with n and add it to the sum
        num /= 10;//to remove the digit we took power to... so that the next number could be looke upon in the next loop


    }

    if(sum==original){
        printf("The number is armstrong");
    }
    else{
        printf("The number is not an armstrong");
    }
}
