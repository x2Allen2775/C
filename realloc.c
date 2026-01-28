#include <stdio.h>

int main(){

    // realloc() = Reallocation.
    //             Resize previously allocated memory
    //             realloc(ptr, bytes)
    //lets we need to dynmically allocate some values for some floating point numbers
    int number =0;
    printf("Engter the numbetr of prices: ");
    scanf("%d", &number);
    float *prices=malloc(number*sizeof(float));//can use malloc or calloc enther will work
    if(prices==NULL){
        pricef("Memory allocation failed\n");
        return 1;
    }
    for(int i=0;i<number;i++){
        printf("Enter price %d",i+1);
        scanf("%f",&prices[i]);

    }
    //lets say now we want to change some memory now we will use realloc function
    int newNumber=0;
    printf("Enter a new number of prices: ");
    scanf("%d",&newNumber) ;
    float *temp=realloc(prices,newNumber*sizeof(float));
    if(temp==NULL){
        printf("could not reallocate memory\n");

    }
    else{
        prices=temp;
        temp=NULL;
            for(int i=number;i<newNumber;i++){
            printf("Enter price %d",i+1);
            scanf("%f",&prices[i]);
        for(int i=0;i<newNumber;i++){
            printf("$%.2f ",prices[i]);
        
    }

    }
    }
    for(int i=0;i<number;i++){
        printf("$%.2f ",prices[i]);
        
    }


    free(prices);
    prices=NULL;
    return 0;
}