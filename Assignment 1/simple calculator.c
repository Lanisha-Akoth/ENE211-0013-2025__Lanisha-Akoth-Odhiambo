#include <stdio.h>
#include <stdlib.h>

int main()
{// identify variables
 double a,b;
 double add, subtraction, multiplication, division;
 int modulus;// modulus results must still be an integer

 //Get input from the user
 printf("Enter the first number (a): ");
 scanf("%lf", &a);
 printf("Enter the second number (b): ");
 scanf("%lf", &b);

 //Perform arithmetic operations
 add = a + b;
 subtraction = a - b;
 multiplication = a * b;
 division = a / b;
 modulus = (int)a % (int)b;//Typecast a and b to (int)so the % operator works

 //Display results
 printf("\n--- Results ---\n");
 printf("Addition (%2lf + %2lf) = %2lf\n", a, b, add);
 printf("Subtraction (%2lf - %2lf) = %2lf\n", a, b, subtraction);
 printf("Multiplication (%2lf * %2lf) = %2lf\n", a, b, multiplication);
 printf("Division (%2lf / %2lf) = %.2lf\n", a, b, division);
 printf("Modulus (%d / %d) = %d\n", (int)a, (int)b , modulus);

 return 0;
}
