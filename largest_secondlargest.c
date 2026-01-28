//to find the largest and second largest no. in a an array
#include<stdio.h>
int nums[5]={2,5,7,8,9};
int largest_;
int second_largest;
int largestfunc(int nums[],int size);
int second_largestfunc(int nums[],int size, int* largest_);

int main ()
{
    largest_=largestfunc(nums,5);
    int *pLargest_=&largest_;
    second_largest=second_largestfunc(nums,5, pLargest_);
    printf("The largest no. in the array is %d", largest_);
    printf("The second largest no. in the array is %d", second_largest);

    return 0;
}

int largestfunc(int nums[],int size){
    for(int i=0;i<size-1;i++){
        if(nums[i]<nums[i+1]){
            largest_=nums[i+1];
        }
        
    }
    return largest_;
}
int second_largestfunc(int nums[],int size, int* largest_){
    for(int i=0;i<size-1;i++){
        if(nums[i]<nums[i+1]&& nums[i+1]!=*largest_){
            second_largest=nums[i+1];
        }
        
    }
    return second_largest;
}