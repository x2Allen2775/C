#include<stdio.h>

int zero=0;
int one=1;
int n;
int series(int n);
int main ()
{
    printf("Pls enter the number of terms: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("%d ",series(i));
    }
return 0;
}

int series(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;

    }
    else
     return series(n-1)+series(n-2);
}