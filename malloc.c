#include<stdio.h>
#include<stdlib.h>
int main ()
{
//malloc()=a function in c that dynamically allocates
// a specified number of bytes in memory
//helpful when we dont know the size of the array then we can use the malloc functio to dynamically allocate values
//lets say we need input for grades
//char grades[5]={0}; but what if we dont know the no of elements after the code is running so we need to create a pointer collaborated with malloc function
int number=0;
printf("Enter the number of grades");
scanf("%d",&number);
char *grades=malloc(number*sizeof(char)); //bracket me size daalna hoga so rather than hard coring the number we can just use the size of function here
//if the above gunction fails it will return NULL hence we need to check for it
//it can produce a segmentation fault
if(grades==NULL){
    printf("Memory allocation failed\n");
    return 1;
}
for(int i=0;i<number;i++)//we cant use the size of function here as the grades is a pointer it will return the size of the pointer rather than the size of the thing we need right now
{
    printf("Enter grade %d",i+1);
    scanf(" %c",&grades[i]);
}
for(int i = 0; i < number; i++){
    printf("%c ", grades[i]);
}

//generally the memory is strored in what is called as stack but here we are renting space from heap
//since we are renting we need to return the memory too
free(grades);//returning the rented space back to the os
grades=NULL;//avoids dangling pointers

return 0;
}