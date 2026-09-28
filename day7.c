//Check whether a year is a leap year.
// Type: Conditional Statements

#include <stdio.h>
int main() {
int y; scanf("%d",&y);
if((y%400==0)|| (y%4==0 && y%100!=0)) printf("Leap year");
else printf("Not a leap year");
return 0;
}