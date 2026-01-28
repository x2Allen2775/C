#include<stdio.h>
int main ()
{
    int quantity=0;
    float price=0.00;
    char name[30]="";
    float a=1.00;


    printf("Shopping Cart Program\n");
    printf("Pls enter the name of the product you want to add.");
    fgets(name, sizeof(name), stdin);
    printf("Pls enter the price of the item: ");
    scanf("%f",&price);
    printf("Pls enter the quantity of the items you want to buy: ");
    scanf(" %d",&quantity);
    a=quantity*price;
    printf("You have bought %d %s for %.2f dollars each hence your total is %.2f dollars.",quantity,name,price, a);
return 0;
}