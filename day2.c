#include <stdio.h>
int main() {
float l, b;
//calculating area and perimeter of a rectangle.
printf("Enter value to calacualte area and perimeter of a rectangle: ");
scanf("%f %f", &l, &b);
printf("Area = %.2f\nPerimeter = %.2f", l*b, 2*(l+b));
return 0;
}