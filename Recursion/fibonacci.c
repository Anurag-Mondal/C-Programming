#include <stdio.h>
int fibonacci (int n) {
    if (n == 1 || n == 2) return 1;
    return (fibonacci (n-1) + fibonacci (n-2)); // Calling a function multiple times
}

int main () {
    int n;
    printf ("Enter n: ");
    scanf ("%d",&n);

    printf ("%d",fibonacci (n)); // New way!!

    return 0;
}