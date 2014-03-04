#include <stdio.h>
#include <math.h>

int isprime(int n) {
 for (int c = 2; c < n; c++) {
  if (n % c == 0) {
   return 1;
  }
 }
 return 0;
}

int main(int argc, char *argv[]) {
 int d, f, n, p, q, r;
 r = 1;
 printf("Enter the number you'd like to factor.\n");
 scanf("%d", &n);
 p = n;

 for (int c = 2; c < n && r < n; c += 2) {
  if (!isprime(c) && n % c == 0) {
   if (f == 0) printf("\nFactors:\n");
   d++;
   while (p % c == 0 && p != 1) {
    f++;
    q++;
    p /= c;
    r *= c;
   }
   printf("%d", c);
   if (q > 1) printf("^%d", q);
   printf("\n");
   q = 0;
  }

  if (c == 2) c--;
 }

 printf("\nResults:\n");

 if (f > 0) {
  printf("%d is a composite number with %d factors, %d of which are"
         " distinct.\n", n, f, d);
 } else {
  printf("%d is prime.\n", n);
 }

 return 0;
}

