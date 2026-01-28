/*#include<stdio.h>
int main ()
{
    int age=21;
    if(age>=18 ){
        printf("You are an adult");

    }
    else if(age<0){
        printf("You havent been born yet.");
    }
    else{
        printf("you are a child");
    }
return 0;
}
*/
//we can use the boolean variable to use it as a condition too, for which we need to include the stdbool.h

#include<stdio.h>
#include <string.h>

int main ()
{
    char name[50]="";
    printf("ENter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    if(strlen(name)==0){
        printf("You did not enter your name!");

    }
    else{
        printf("Hello %s", name);
    }
return 0;
}
