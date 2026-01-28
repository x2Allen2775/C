#include <stdio.h>
#include <stdlib.h>

int main(){

    // calloc() = Contiguous Allocation/clear memory
    // Allocates memory dynamically and sets all allocated bytes to 0.
    // malloc() is faster, but calloc() leads to less bugs
    // calloc(#, size)
    // lets say we are playing a game and we dont know the number of players until after the program is already running
    int number =0;
    printf("Enter the number of players: ");
    scanf("%d",&number);
    //then we are first going to creat a mallo then create a calloc
    int *scores=calloc(number,sizeof(int));//using malloc will give us garbage values instead of the user input values hence we should use calloc
    if(scores==NULL){
        printf("Memory allocationn failed");
        return 1;
    }
    for(int i=0;i<number;i++){
        printf("Enter score %d", i+1);
        scanf("%d",&scores[i]);

    }
    for(int i=0;i<number;i++){
        printf("%d", scores[i]);

    }
    free(scores);
    scores=NULL;
    return 0;
}