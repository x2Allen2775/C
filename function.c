#include<stdio.h>
//what to sinf the happy birthday song three times

void happybirthday(char chut[], int lund);
int main ()
{
//function= A resuable section of code that can invoked "called"
//argumentrs can be sent to a function so that it can use them
int age=21;
char name[]="Bro";
happybirthday(name, age);
happybirthday(name, age);
happybirthday(name, age);


return 0;
}

void happybirthday(char nameoofmychoice[], int ageofmychoice){
    printf("Happy birthday to you");
    printf("Happy birthday to you %s",nameoofmychoice);

    printf("Happy birthday to you %d",ageofmychoice);

}
//see this clears all my concept at one place the name of the actual variable should be right where the function ahs been called but during the inintialization and declaration the name can be tempered as per choice but inside the function the tempered name should be used as done here
