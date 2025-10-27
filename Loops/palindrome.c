#include <stdio.h>
int main () {
    int n;
    printf ("Enter a number which you want to check whether it is palindrome or not: ");
    scanf ("%d",&n);
    int reverse = 0;
    int f = n;
    int c;
    while (f > 0) {
        reverse = reverse * 10;
        c = f % 10;
        reverse = reverse + c;
        f = f / 10;
    }
    if (n == reverse) {
    printf ("\nThe number %d is a palindrome",n);
    } else { printf ("\nThe number %d is not a palindrome",n); }
   
    return 0;
}
// This program finds whether a number is palindrome or not.