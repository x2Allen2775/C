#include<stdio.h>
int main ()
{
//while loop= continue some code WHILE teh condition remains true
// condition must be true for us to enter while loop

//while(1==1){
//printf("Help im stuck")
//}
//this is an example of a infinite loop which we dont have to do
int number=0;
while(number<=0){
    printf("Enter a number greater than 0: ");
    scanf("%d",number);
}

//now do while
do {
 printf("Enter a number greater than 0: ");
 scanf ("%d", &number);
}while (number <= 0);
//this means ek baar loop chalega then condition check hogi then normally chalega loop


return 0;
}

//another eg
#include <stdio.h>
#include <string.h>

int main() {

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    while(strlen(name)==0){
        printf("name cannot be empty. pls enter your name");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("%s",name);
    return 0;
}