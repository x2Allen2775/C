#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main ()
{
    // Pseudo-random = Appear random but are determined by a
// mathematical formula that uses a seed value
// to generate a predictable sequence of numbers.
// advanced: Mersenne Twister or /dev/random
    //printf("%d",rand()); this will give a fixed value as it is using a preceeded value in the mathematical formula used for creating random numbers...
    srand(time(NULL));//null ki jagah 0 bhi likh sakte ho
    printf("%d",rand());
    //to find the maximum random value just change rand() in printf function to RAND_MAX

    //now to get a random number from a specific range we do the following
    srand(time(NULL));
    int randomnum=(rand()%2)+1;//agar range 2 tak hai to 2 likha hai idher agar koi num x tak range me karna hai to 2 ki jagah x kardo change but still it can give 0 hence to eliminate we have to add 1.
    //and if we want a range of number from x to y so the following will be the expression for the same
    //int randomnum=(rand()%(y-x+1))+x; only if the mininmum value is other than 1 meaning the min value is more than 1
    //for eg teen num chahiye random to fir hum teen variable banadenge
    

    printf("%d",randomnum);
    return 0;
}