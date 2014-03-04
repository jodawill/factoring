#include <stdio.h>

int isprime(int n) {
 for (int c = 2; c < n; c++) {
  if (n % c == 0) {
   return 1;
  }
 }
 return 0;
}

int main(int argc, char *argv[]) {
 int n, p, q, r;
 r = 1;
 printf("Enter the number you'd like to factor.\n");
 scanf("%d", &n);

 for (int c = 2; c < n && r < n; c++) {
  if (!isprime(c) && n % c == 0) {
   p = n;
   while (p % c == 0 && p != 1) {
    q++;
    p /= c;
    r *= c;
   }
   printf("%d", c);
   if (q > 1) printf("^%d", q);
   printf("\n");
   q = 0;
  }
 }

 return 0;
}

