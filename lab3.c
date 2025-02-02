/* <Sams Guttry>
   CpSc 1011, Lab Section #002, Spring 2025
   Due 1/31/2025
   Lab #3
   Demonstrate outputs and displaying values to the screen
*/

#include <stdio.h>
#include <math.h>
int main(void) {
   char input;
   fprintf(stderr, "Enter any character: ");
   scanf(" %c", &input);
   printf("The decimal value of %c is: %d\n", input, (int)input);
   int decimalplaces = 1;

   double output = sqrt((double)input);

   printf("The square root of %i is: %.*f \n", input, decimalplaces, output);
   int piplaces = (int)output;
   printf("PI printed to %i decimal places is: %.*f \n", piplaces, piplaces, M_PI);

   return 0;
}

