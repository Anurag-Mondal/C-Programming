#include <stdio.h>
int factorial (int n) {
    if (n == 1) return 1; // Base Case otherwise "SEGMENTATION ERROR"
    int fact = factorial (n-1) * n; // Recursion
    return fact;
}

int main () {
    int n;
    printf ("Enter n: ");
    scanf ("%d",&n);

    int fact = factorial (n);
    printf ("Factorial of %d is %d",n,fact);

    return 0;
}