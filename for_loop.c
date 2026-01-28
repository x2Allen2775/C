#include<stdio.h>
#include<unistd.h>
int main ()
{
//for loop= repeat some code a limited number of times
// for(initialization; condition;update);
for(int i=10;i>=0;i--){
    sleep(1);
    printf("%d\n",i);


}
printf("Happy new year!");

return 0;
}