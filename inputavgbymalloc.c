#include<stdio.h>
#include <stdlib.h>
float sum=0.0;
int main ()
{
    int num=0;
    printf("Enter the number of numbers u wanat to find the avg of: ");
    scanf("%d",&num);
    float *nums=malloc(num*sizeof(float));

    if(nums==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i=0;i<num;i++){
        printf("Enter a num %d", i+1);
        scanf(" %f",&nums[i]);
    }
    for(int i=0; i<num;i++){
        sum+=nums[i];
    }
    printf("The avg of the numbers u entered is %.2ff", sum/num);
    return 0;
}