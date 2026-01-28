#include<stdio.h>
int main ()
{
    //switch=an alternative to using many if else statement
    // more efficient w/ fixed integer values
    int dayOfWeek=0;
    printf("Enter the day of the week (1=Monday, 2=Tuesday, ..., 7=Sunday): ");
    scanf("%d", &dayOfWeek);
    switch(dayOfWeek) {
        case 1:
            printf("It is Monday\n");
            break;
        case 2:
            printf("It is Tuesday\n");
            break;
        case 3:
            printf("It is Wednesday\n");
            break;
        case 4:
            printf("It is Thursday\n");
            break;
        case 5:
            printf("It is Friday\n");
            break;
        case 6:
            printf("It is Saturday\n");
            break;
        case 7:
            printf("It is Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
            break;
    }
return 0;
}          


//these switch cases can also contain charachter and other symbols
