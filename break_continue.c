#include<stdio.h>
int main ()
{
//break=Break out of a loop (STOP)
//continue=skip current cycle of a loop (skip)
for(int i=1;i<=10;i++){
    if(i==4){
        break;//means 4 ke baad loop escape kardega
        continue;//means 4 ke baad loop continue hoga


    }
    printf("%d\n",i);
}
return 0;
}