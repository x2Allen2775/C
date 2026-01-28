#include<stdio.h>
#include<string.h>
//to reverse the string

int main ()
{
    char name[1000]="";
    char temp;
    int j=0;
    printf("Please enter the word you want to reverse it.\n");
    scanf("%s",name);//string ke input me & use nahi hota

    int n=strlen(name);
    for(int i=0;i<n/2;i++){
       temp = name[i];              // store current
        name[i] = name[n - 1 - j];   // copy opposite end
        name[n - 1 - j] = temp;      // restore saved char
        j++;
    }
    printf("reversed : %s",name);
    return 0;
}   