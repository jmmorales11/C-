#include <stdio.h>
int main()
{
   short int num1, num2, sum;
   printf("Enter first number: ");
   scanf("%hd", &num1);
   printf("Enter second number: ");
   scanf("%hd", &num2);

   sum = num1 + num2;
   printf("Sum of the entered numbers: %hd", sum);
   return 0;
}
