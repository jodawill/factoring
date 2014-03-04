#include <stdio.h>
#include <math.h>

int isprime(int n) {
 for (int c = 2; c <= sqrt(n); c += 2) {
  if (n % c == 0) {
   return 1;
  }
  if (c == 2) c--;
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
  if (n % c == 0 && !isprime(c)) {
   if (f == 0) printf("\nFactors:\n");
   d++;
   if (f > 0) printf(", ");
   while (p % c == 0 && p != 1) {
    f++;
    q++;
    p /= c;
    r *= c;
   }
   printf("%d", c);
   if (q > 1) printf("^%d", q);
   q = 0;
  }

  if (c == 2) c--;
 }

 if (f > 0) printf("\n");
 printf("\nResults:\n");

 if (f > 0) {
  printf("%d is a composite number with %d factors, %d of which are"
         " distinct.\n", n, f, d);
 } else {
  printf("%d is prime.\n", n);
 }

 return 0;
}

