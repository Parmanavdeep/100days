//Calculate area and circumference of a circle.
#include <stdio.h>
int main() {
float r;
const float PI = 3.14159;
printf("Enter value of radius to calculate area and circumference of a circle");
scanf("%f", &r);
printf("Area = %.2f\nCircumference = %.2f", PI*r*r, 2*PI*r);
return 0;
}