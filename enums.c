#include <stdio.h>

enum Day{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATRUDAY
};
//by default the first coonstant is assigned the vaue of 0 but we can define by our own to0...
//The constants in the c language swhould be in capital letters


int main() {
    
    // enum = A user-defined data type that consists
    //        of a set of named integer constants.
    //        Benefit: Replaces numbers with readable names
    enum Day today=MONDAY;
    printf("%d",today);
    //this wil display the value of the constant in the enum of today

    return 0;
}
//if we are using typedef to eliminate writing enums again and again..
//the next code is its eg
#include <stdio.h>

typedef enum{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4,
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
}Day;
//jab type def karte hai to name of the enum should be at last before the semicolo just as shown above

int main() {

    enum Day today = SUNDAY;

    printf("%d", today);

    return 0;
}