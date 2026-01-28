#include<stdio.h>
#include <string.h>
int main ()
{
//Array of strings
char friut[]="Apple";
char fruits[][10] = {"Apple", "Banana", "Coconut"};
int size = sizeof(fruits) / sizeof(fruits[0]);
//here the array works as the collection of all the characters meaning letters so the 1st row include a p p l e hence to egt the whole word we just mention the coloumn
//for eg
fruits[0][0]='e';
fruits[0][4]='a';
for(int i = 0; i < size; i++){
    printf("%s\n", fruits[i]);
}
char names[3][25]={0};
printf("Enter a name: ");
fgets(names[0], sizeof(names[0]), stdin);
names[0][strlen(names[0]) - 1] = '\0';
//or
for(int i = 0; i < 3; i++){
    printf("Enter a name: ");
    fgets(names[i], sizeof(names[i]), stdin);
    names[i][strlen(names[i]) - 1] = '\0';
}
return 0;
}

//for eg we wan to upper case and lower case we need to include ctype.h file in the code....
//syntax is
// variablename=toupper(variablename)
//variablename=tolower(variablename)
