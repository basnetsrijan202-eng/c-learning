#include <stdio.h>
int main() {
int n;
 printf("Enter a number: ");
scanf("%d", &n);
if (n >= 0)
 printf("Positive\n");
if (n < 0)
 printf("Negative\n");
return 0;
} 