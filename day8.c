// To Classify a character as uppercase, lowercase, digit or special character.

#include <stdio.h>
int main() {
char c; scanf(" %c",&c);
if(c>='A'&&c<='Z') printf("Uppercase alphabet");
else if(c>='a'&&c<='z') printf("Lowercase alphabet");
else if(c>='0'&&c<='9') printf("Digit");
else printf("Special character");
return 0;
}