#include <stdio.h>
#include <math.h>

int main()
{
    double radius = 0.0;
    double area = 0.0;
    double surfacearea=0.0;
    double volume=0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfacearea=4*PI8pow(radius,2);
    volume=(4.0/3.0)*PI*pow(radius, 3);
    printf("Area: %.21lf\n", area);
    printf("Surface Area: %.21lf\n", surfacearea);
    printf("Volume: %.21lf\n", volume);


    return 0;
}
