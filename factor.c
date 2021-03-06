#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <strings.h>

int isprime(int n) {
 for (int c = 2; c <= sqrt(n); c += 2) {
  if (n % c == 0) {
   return 1;
  }
  if (c == 2) c--;
 }
 return 0;
}

int list_primes(int n) {
 int q = 0;
 for (int c = 2; c < n; c += 2) {
  if (isprime(c) == 0) {
   if (q > 0) printf(", ");
   printf("%d", c);
   q++;
  }
  if (c == 2) c--;
 }

 if (q > 0) printf("\n\nResults:\nFound %d primes under %d.\n", q, n);
 return 0;
}

int main(int argc, char *argv[]) {
 int d, f, n, p, q, r;
 r = 1;
 if (argc < 2) {
  printf("Enter the number you'd like to factor.\n");
  for (scanf("%d", &n); n <= 0; scanf("%d",&n)) {
   while (fgetc(stdin) != '\n');
   printf("Invalid input. Enter an integer to factor: ");
  }
 } else {
  if (strcmp(argv[1], "-l") == 0 || strcmp(argv[1], "--list") == 0) {
   list_primes(atoi(argv[2]));
   if (list_primes <= 0) {
    printf("Invalid argument.\n");
    return 1;
   }
   return 0;
  } else {
   n = atoi(argv[1]);
   if (n <= 0) {
    printf("Invalid argument.\n");
    return 0;
   }
  }
 }
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

