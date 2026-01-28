#include <stdio.h>
#include <string.h> 

struct Student {
    char name[50];
    int age;
    float gpa;
};

void printstudent(struct Student student);

int main() {
    int num;
    printf("Enter the number of students you want to add the details of: ");
    scanf("%d", &num);

    struct Student students[100]; // array to store up to 100 students

    for (int i = 0; i < num; i++) {
        char localname[100];
        int localage;
        float localgpa;

        printf("\nEnter details of student no. %d\n", i + 1);

        printf("Enter the name: ");
        scanf(" %[^\n]", localname); // reads string with spaces

        printf("Enter the age: ");
        scanf("%d", &localage);

        printf("Enter the GPA: ");
        scanf("%f", &localgpa);

        // assigning values into the struct
        strcpy(students[i].name, localname);
        students[i].age = localage;
        students[i].gpa = localgpa;
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < num; i++) {
        printstudent(students[i]);
    }

    return 0;
}

void printstudent(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n\n", student.gpa);
}
