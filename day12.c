// Calculate library fine based on late days.

#include <stdio.h>
int main() {
int d; scanf("%d",&d);
if(d<=5) printf("Fine = Rs.%d",d*2);
else if(d<=10) printf("Fine = Rs.%d",5*2+(d-5)*4);
else if(d<=30) printf("Fine = Rs.%d",5*2+5*4+(d-10)*6);
else printf("Membership Cancelled");
return 0;
}