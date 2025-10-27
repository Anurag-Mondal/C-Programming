#include <stdio.h>
int main () {
    int n;
    printf ("Enter a positive number: ");
    scanf ("%d",&n);
    int a = 0;

    if (n <= 0) { printf ("Enter a positive number: "); }

    if (n>=1) {
    printf ("\nThe factors of %d is/are: ",n);
    for (int i = 1; i <= n; i++) {
        if (n%i == 0) {
        printf ("%d ",i);  
        }
    }
}
    return 0;
}
// This program finds the factors of a number.