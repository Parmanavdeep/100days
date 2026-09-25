#include<stdio.h>
int main() {
double a, b;
//Display sum, difference, product and quotient; handle division by zero.
printf("Enter ur value for sum or product or quotient and division by zero");
scanf("%lf %lf", &a, &b);
printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\n", a+b, a-b, a*b);
if (b != 0)
printf("Quotient = %.2f", a/b);
else
printf("Quotient = Cannot divide by zero");
return 0;
}