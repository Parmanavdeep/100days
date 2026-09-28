 // To Check whether an integer is positive, negative or zero using nested if-else.
// Type: Conditional Statements
#include <stdio.h>
int main() {
int n; scanf("%d",&n);
if(n>=0) {
if(n==0) printf("Zero"); else printf("Positive");
} else printf("Negative");
return 0;
}
