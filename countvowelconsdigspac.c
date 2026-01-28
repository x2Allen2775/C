#include<stdio.h>
#include <string.h>
#include<ctype.h>
int main ()
{
    char user_input[1000]="";
    
    int constants=0;
    int vowels=0;
    int digits=0;
    int spaces=0;
    
    
    printf("Pls enter for which u want us to count everything.\n");
    fgets(user_input, sizeof(user_input), stdin);
    int num=strlen(user_input);
    for (int i = 0;i<num; i++) {
        user_input[i] = tolower(user_input[i]);  // convert each character to lowercase
    }
    for(int i=0;i<num;i++){
        if(user_input[i]=='a'||user_input[i]=='e'||user_input[i]=='i'||user_input[i]=='o'||user_input[i]=='u'){
            vowels++;
        }
        else if(user_input[i]=='0'||user_input[i]=='1'||user_input[i]=='2'||user_input[i]=='3'||user_input[i]=='4'||user_input[i]=='5'||user_input[i]=='6'||user_input[i]=='7'||user_input[i]=='8'||user_input[i]=='9'){
            digits++;
        }
        else if(user_input[i]==' '){
            spaces++;
        }
        switch (user_input[i]){
            case 'b':
                constants++;
                break;
            case 'c':
                constants++;
                break;
            case 'd':
                constants++;
                break;
            case 'f':
                constants++;
                break;
            case 'g':
                constants++;
                break;
            case 'h':
                constants++;
                break;
            case 'j':
                constants++;
                break;
            case 'k':
                constants++;
                break;
            case 'm':
                constants++;
                break;
            case 'n':
                constants++;
                break;
            case 'p':
                constants++;
                break;
            case 'q':
                constants++;
                break;
            case 'r':
                constants++;
                break;
            case 's':
                constants++;
                break;
            case 't':
                constants++;
                break;
            case 'z':
                constants++;
                break;
            case 'v':
                constants++;
                break;
            case 'w':
                constants++;
                break;
            case 'x':
                constants++;
                break;
            case 'y':
                constants++;
                break;
            case 'l':
                constants++;
                break;
            default:
                break;
            

        }
       
    }

    
    printf("Consonents: %d", constants);
    printf("Vowels: %d", vowels);
    printf("digits: %d", digits);
    printf("spaces: %d", spaces);
return 0;
}