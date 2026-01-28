#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>//for sleep function

int main() {

    // DIGITAL CLOCK
    time_t rawtime=0;//jan 1 1970 (epoch)
    struct tm*pTime=NULL;
    bool isrunning=true;
    printf("DIGITAL CLOCK\n");
    while(isrunning){
        time(&rawtime);
        pTime=localtime(&rawtime);
        printf("\r%02d:%02d:%02d",(*pTime).tm_hour,(*pTime).tm_min,(*pTime).tm_sec);
        //\r is to move back the cursor at the starting of the line
        
        sleep(1);

    }

    


    return 0;
}