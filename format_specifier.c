#include<stdio.h>
int main ()
{
// Format specifier = Special tokens that begin with a % symbol,
//                    followed by a character that specifies the data type
//                    and optional modifiers (width, precision, flags).
//                    They control how data is displayed or interpreted.


// the format specifier are the one which has a percent sign it is different for different data types
//to modify the vlaue display we use these which some more syntax to modify how the value will be displayed


//width

int num1=1;
int num2=10;
int num3=100;

printf("%3d\n",num1);
printf("%3d\n",num2);
printf("%3d\n",num3);
//now it will print the values with minimum of three spaces in it
//now to left justify just change the 3 to -3
// now to use zeros instead of empty spaces just change the 3 with 03 and to print the sign that is the number positive or negative change it to +d


//precision

float price1=19.99;
float price2=1.50;
float price3=-100.00;
printf("%.2f\n",price1);
printf("%.2f\n",price2);
printf("%.2f\n",price3);
//now the floating no will give 6 decimal values by default but to precise it to 2 or anynumber we can use .2,.3,.4,....
//if we want to precide the value to one decimal value it will round it off so better keep that in mind when using the precision format specifier...

//for eg now we want to print with all these three specifier ie flag precision and width
//be it 7 be the width and 2 be the precision
printf("%+7.2f",price1);

return 0;
}