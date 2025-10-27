#include <stdio.h>
int main () {
    int n;
    printf ("Enter a number: ");
    scanf ("%d",&n);
    for (int i = 1; i <= n; i++)
    printf ("\nHappy Birthday To You, %d",i); // No curly braces needed.
    return 0;
}