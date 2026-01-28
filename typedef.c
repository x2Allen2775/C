#include <stdio.h>

typedef int Number;
typedef char string[50];

int main() {
    
    // typedef existing_type new_name;
    
    //int x = 3;
    //int y = 4;
    //int z = x + y;
    Number x = 3;
    Number y = 4;
    Number z = x + y;
    //char name[]="Bro code";
    string name="Bro code";
    printf("%d", z);

    return 0;
}
//typedef basically means hum datatype ka name change karke khud se rakh sakte hai fir uske baad vo data type ki jagah hum apna set kara hua naaam likh sakte hai