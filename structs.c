#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
struct Student{//here Student is like a bludeprint which all the things objects/variable etc inside it will be having compulsory
    char name[50];
    int age;
    float gpa;
    bool isfulltime;

};
void printstudent(struct Student student);



int main() {
    
    // struct = A custom container that holds multiple
    //          pieces of related information
    //          Similar to Objects in other languages
    struct Student student1={"Me",30,2.5,true};
    struct Student student2={"te",30,2.5,true};
    struct Student student3={0};

    printf("%s\n",student1.name);
    //to call an object inside a struct we use the . that is the member access operator
    printf("%f\n",student1.gpa);
    printf("%d\n",student1.isfulltime);
      //the boolean variavble here willl give the output in the form of 1 and 0 hence we can use the ternary operator here to get a yes or no in exchange of 0 and 1
    printf("%s\n",student2.name);
    printf("%f\n",student2.gpa);
    printf("%d\n",student2.isfulltime);

    //to assign the values indiviadulally then do the following
    strcpy(student3.name,"Sandy");
    student3.age=23;
    student3.gpa=4.0;
    printstudent(student1);//eg of using a function to display structs
    
    return 0;
}
//again if we dont want to specify any values to the new created struct variable like student 3 in this case just put 0 in the curcly brackets so that it makes everything inside this be zero ... clearing outthe previous memory stored inside the variable

void printstudent(struct Student student){
    printf("%s\n",student.name);
}