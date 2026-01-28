#include<stdio.h>
int main ()
{
    //bubble sort is to sort the array in a ascending order
    int nums[5]={2,4,5,1,6};
    int temp;
    for(int i=0;i<4;i++){
     for(int j=0;j<5-i-1;j++){
        if(nums[j]>nums[j+1]){
            temp=nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
        }
        
    }}
    for(int i=0;i<5;i++){
        printf("%d\n", nums[i]);}
return 0;   }