#include <stdio.h>
int main () {
    int n;
    printf ("Enter a number ");
    scanf ("%d",&n);
    int a = 0;

    if (n == 1 || n == 0) { printf ("%d is a neither a prime nor a composite number",n); }

    if (n>=2) {
    for (int i = 2; i <= n-1; i++) {
        if (n%i == 0) { 
        a = a + 1; }
        break;
    }
    if (a == 0) {printf ("%d is a prime number",n); }
    else {printf ("%d is a composite number",n); }
}

    return 0;
}

// This program finds whether a number is prime or composite.