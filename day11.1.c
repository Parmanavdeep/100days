//To find profit or loss

#include <stdio.h>
int main() {
float cp,sp; scanf("%f%f",&cp,&sp);
if(sp>cp) printf("Profit = %.2f%%",(sp-cp)*100/cp);
else if(sp<cp) printf("Loss = %.2f%%",(cp-sp)*100/cp);
else printf("No profit, no loss");
return 0;
}