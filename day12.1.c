// Calculate electricity bill using slab rates.

#include <stdio.h>
int main() {
int u; double bill;
scanf("%d",&u);
if(u<=100) bill=u*5;
else if(u<=200) bill=100*5+(u-100)*7;
else if(u<=300) bill=100*5+100*7+(u-200)*10;
else bill=100*5+100*7+100*10+(u-300)*12;
printf("Bill = Rs.%.2f",bill);
return 0;
}