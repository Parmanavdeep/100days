#include <stdio.h>
int main() {
double a, b;
printf(" Enter ur vslue for sum, difference, product and quotient; handle division by zero :\n");
scanf("%lf %lf", &a, &b);
printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\n", a+b, a-b, a*b);
if (b != 0)
printf("Quotient = %.2f", a/b);
else
printf("Quotient = Cannot divide by zero");
return 0;
}