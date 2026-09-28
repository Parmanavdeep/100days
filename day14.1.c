// Print the product of even numbers from 1 to n.

#include <stdio.h>
int main() {
int n,i; long long p=1; scanf("%d",&n);
for(i=2;i<=n;i+=2) p*=i;
printf("Product = %lld",p);
return 0;
}