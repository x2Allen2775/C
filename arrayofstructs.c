#include <stdio.h>

struct Car{
    char model[25];
    int year;
    int price;
};
int main(){

    // array of structs = Array where each element contains a struct {}
    //                    Helps organize and groups together related data

        //struct Car car1={"Mustange", 2025, 32000};
        //struct Car car2={"Chwjhwf", 3834,27636};
        //printf("%s %d $%d\n", car1.model, car1.year, car1.price);
        //printf("%s %d $%d\n", car2.model, car2.year, car2.price);
        //instead of doing the above we can make the array of strucrs
        struct Car cars[] = {{"Mustang", 2025, 32000},
              {"Corvette", 2026, 68000},
              {"Challenger", 2024, 29000}};

        int number = sizeof(cars) / sizeof(cars[0]);

        for(int i = 0; i < number; i++){
            printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
        }

    return 0;
}
