#include<stdio.h>
#include <string.h>
int main ()
{
 //int age;
 //float gpa;
 //char grade;
 //char name[30];
 //printf("%d", age);
 //printf("%d", gpa);
 //printf("%d", grade);
 //printf("%d", name);
//since the values are not defined the the value when we want to display these values it will give a garbage value
//hence good practice is to define these like this
int age = 0;
float gpa = 0.0f;//this tell other programmers that this is a floating value
char grade = '\0';//this is null terminator character which clears out any value
char name[30] ="";


//hence to finally assigning the value as input by the user is as following
printf("Pls enter your age");
scanf("%d", &age);
//here & is the address of operator which helps to place the value entered by the user into the memory adddress of the variable we defined earlier or we can say before which the sign is put

//when we ask for user input again and again like one after the other there might be a chance that the previous user input produces a new line character buffer which gets saved in the next user input hence to clear out the buffer before it gets assigned just add a space before its format specifer
//for eg
//scanf(" %d", &age);



//now if i get the user input of the string like for taking there full name as user input so the prob here is that the scanf function dont take the space so if i enter my name full with space it willl only take my first name so to clear this prob out we use a diff function called "file gets string"
//fgets(name, 30, stdin);
// here inside the bracket first comes the name of the variable then comes the size of the array and then stdin
//but here we need to change the size of the array when w=ever we change in the array its size we neeed to change here too so we can use the size of operatorfunction
//fgets(name,sizeof(name),stdin);
//here also teh buffer prob occurs but here we dont have the luxury of adding space behind the format specifier
//we can place the getchar(); before calling the fgets function
//eg
getchar();
printf("ENter uour full name: ");
fgets(name, sizeof(name), stdin);

//now when we press enter here too a new line character buffers come into play so we need to eleminate w can do so by using some other tools available in diff header file called string.h see above
name[strlen(name)-1]='\0';
//means last wala character jo buffer banega usko hamne null terminator kardiya jo ki usse hata degi...
//hum isse sizeof se nahi karsakte kyuki sizeof space character ko bhi leleta count me to hame bass text wale part ke aage wala hatana hai iske liye hamne vo header fill include kari which gives us strlen function to get the exact length of the string apart from teh space wagera...


return 0;
}