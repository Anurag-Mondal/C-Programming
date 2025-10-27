#include <stdio.h>
int main () {
    int n;
    printf ("Enter a number which you want to reverse:");
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
    printf ("\nThe reverse of %d is %d",n,reverse);
    return 0;
}
// This program can reverse a number.