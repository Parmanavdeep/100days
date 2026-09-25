// Find the sum of the first n natural numbers.
#include <stdio.h>
int main() {
int n, i, sum = 0;
scanf("%d", &n);
for(i=1;i<=n;i++) sum += i;
printf("Sum = %d", sum);
return 0;
}
