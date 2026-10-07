#include <stdio.h>
#include <stdlib.h>

int main()
{ // dataType variables
     double    area;
 const double  pi=3.142;
    double     r;

    // input and output
    printf("Enter your radius: ");
    scanf("%lf",&r);

    area=pi*r*r;
    printf("The area is %lf", area);
    return 0;
}
