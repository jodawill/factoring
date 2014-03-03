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
 int n, p;
 scanf("%d", &n);

 for (int c = 2; c < n; c++) {
  if (!isprime(c) && n % c == 0) {
   p = n;
   while (p % c == 0 && p != 1) {
    printf("%d\n", c);
    p /= c;
   }
  }
 }

 return 0;
}

