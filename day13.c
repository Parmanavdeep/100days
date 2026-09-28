 // Basic calculator using switch-case.

#include <stdio.h>
int main() {
double a,b; char op; scanf("%lf %c %lf",&a,&op,&b);
switch(op) {
case '+': printf("%.2f",a+b); break; case '-': printf("%.2f",a-b); break;
case '*': printf("%.2f",a*b); break; case '/': if(b!=0) printf("%.2f",a/b); else printf("Cannot divide by zero"); break;
case '%': { int x=(int)a,y=(int)b; if(y!=0) printf("%d",x%y); else printf("Cannot divide by zero"); break; }
default: printf("Invalid operator");
}
return 0;
}