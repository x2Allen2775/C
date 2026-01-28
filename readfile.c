#include<stdio.h>
int main ()
{
//read a file

FILE *pFile=fopen("/Users/allen2775/Desktop/c personal projects/input.txt","r");
//buffer is like a waiting room to store the data temporaryly to read thr file
char buffer[1024]={0};
 

if(pFile==NULL){
    printf("Could not open file\n");
    return 1;
}
while(fgets(buffer,sizeof(buffer),pFile)!=NULL){
    printf("%s",buffer);
}
fclose(pFile);
return 0;
}