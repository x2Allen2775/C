#include<stdio.h>
int main ()
{
//write a file
FILE *pFile=fopen("Output.txt","w");//w for write, r for read and here output.txt is the file path
char text[]="dhsfjbdk";
//if the above function is not able to open the fill it will return null or 0
if(pFile==NULL){
    printf("Error opening file\n");
    return 1;
}
//to print inside the file
fprintf(pFile,"%s",text);
fclose(pFile);//its good to close what you have opened

return 0;
}