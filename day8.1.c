// To fint the largest of three numbers using if-else.
// Type: Conditional Statements

#include <stdio.h>
int main() {
int a,b,c,max; scanf("%d%d%d",&a,&b,&c);
if(a>=b && a>=c) max=a;
else if(b>=a && b>=c) max=b;
else max=c;
printf("Largest = %d",max);
return 0;
}