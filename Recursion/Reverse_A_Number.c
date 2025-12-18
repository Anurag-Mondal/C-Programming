#include <stdio.h>
void reverse (int n) {
    if (n == 0) return;
    printf ("%d",n % 10);
    n /= 10;
    reverse (n);
}
int main () {
    int n;
    printf ("Enter a number: ");
    scanf ("%d",&n);
    printf ("The reverse is: ");
    reverse (n);
    return 0;
}