#include <stdio.h>

int square(int num){

    int result = num * num;

    return result;
    //simplify kar sakte hai like not creating a local variable named result and returning num*num directly

}

int main() {
//return = returns a value back to where you call a function

    int x = square(2);
    int y = square(3);
    int z = square(4);
    //this means that we are storing the value returned by square function when we passs in 2 as input in it inside x y or z variable

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;//here 0 works as a exit code because the the return type of the main function is the integer
}
//see here it tells that the data type of teh function should be of what it returns


//second eg

#include <stdio.h>
#include <stdbool.h>


bool agecheck(int age){
    if(age>=18){
        return true;

    }
    else{
        return false;
    }
}
int main(){
    int age=21;
    if(agecheck(age)){
        printf("You may sign up");

    }
    else{
        printf("You must be 18 plus."); 
    }
}