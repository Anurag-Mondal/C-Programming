#include <stdio.h>
int main () {
    int n;
    printf ("Calculate the number which factorial you want to calculate: ");
    scanf ("%d",&n);
    unsigned long long int factorial = 1;

    if (n<0) {
        printf ("\nEnter number greater than or equal to 0");
    }

    if (n==0) {
        printf ("\nThe factorial of 0 is 1");
    } 

    if (n > 0 ) {
    for (int f = n; f >= 1; f--) {
        factorial = factorial * f;
    }
    printf ("\nThe factorial of %d is %d",n,factorial);
    }

    return 0;
}
// This program finds the factorial of a number.