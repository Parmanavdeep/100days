//Calculate simple and compound interest.
#include <stdio.h>
#include <math.h>
int main() {
double p, r, t, si, ci, amount;
scanf("%lf %lf %lf", &p, &r, &t);
si = p*r*t/100;
amount = p * pow(1+r/100, t);
ci = amount - p;
printf("Simple Interest = %.2f\nCompound Interest = %.2f", si, ci);
return 0;
}

