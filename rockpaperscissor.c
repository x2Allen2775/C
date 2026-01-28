#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int getcomputerchoice();
int getuserchoice();
void checkwinner(int userchoice, int computerchoice);
int main ()
{
//rock papaer scissor
srand(time(NULL));
printf("Rock paper scissors game\n");
int userchoice=getuserchoice();
int computerchoice=getcomputerchoice();
switch(userchoice){
    case 1:
        printf("You chose ROCK!\n");
        break;
    case 2:
        printf("You chose PAPER!\n");
        break;
    case 3:
        printf("You chose SCISSORS!\n");
        break;
}
switch(computerchoice){
    case 1:
        printf("Computer chose ROCK!\n");
        break;
    case 2:
        printf("Computer chose PAPER!\n");
        break;
    case 3:
        printf("Computer chose SCISSORS!\n");
        break;
}
checkwinner(userchoice, computerchoice);



return 0;
}
int getcomputerchoice(){
    return (rand()%3)+1;
}
int getuserchoice(){
    int choice=0;
    do{
        printf("Choose an option\n");
        printf("1. Rock\n");
        printf("2. paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

    }while(choice<1 || choice > 3); 
    return choice;

}
void checkwinner(int userchoice, int computerchoice){
   if(userchoice == computerchoice){
    printf("It's a TIE!");
}
else if(userchoice == 1 && computerchoice == 3){
    printf("You WIN!");
}
else if(userchoice == 2 && computerchoice == 1){
    printf("You WIN!");
}
else if(userchoice == 3 && computerchoice == 2){
    printf("You WIN!");
}
else{
    printf("You LOSE!");
}


}