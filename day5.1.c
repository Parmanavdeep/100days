//Convert seconds to hours:minutes:seconds.
#include <stdio.h>
int main() {
int s, h, m, sec;
scanf("%d", &s);
h = s/3600; m = (s%3600)/60; sec = s%60;
printf("%02d:%02d:%02d", h, m, sec);
return 0;
}
