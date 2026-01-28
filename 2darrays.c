#include<stdio.h>
int main ()
{
// 2D array = An array where each element is an array
// array[][] = {{}, {}, {}};

int number[][4]={{1,2,3},{4,5,6},{7,8,9}};
//no of columbbs has to be mentioned
printf("%d ",number[1][2]);
 for(int i = 0; i < 3; i++){ // rows
    for(int j = 0; j < 3; j++){ // columns
        printf("%d ", number[i][j]);
    }
    printf("\n");
}
//similarly we can just add the scanf statement to accept the user input in the array

return 0;
}