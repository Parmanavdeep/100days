// To Check whether a character is a vowel or consonant
// Type: Conditional Statements

#include <stdio.h>
#include <ctype.h>
int main() {
char c; scanf(" %c",&c); c=tolower(c);
if(c>='a' && c<='z') {
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') printf("Vowel");
else printf("Consonant");
} else printf("Not an alphabet");
return 0;
}