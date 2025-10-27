#include <stdio.h>
int main () {
    int n;
    printf ("Enter a positive integer for which you want to check whether it is a armstrong number or not : ");
    scanf ("%d",&n);
    int sum = 0;
    int i = n;
    int c;
    if (n <= 0) {
        printf ("Enter a positive integer");
    }
    if (n>0) {
    while (i > 0) {
        c = i % 10;
        sum = sum + (c*c*c);
        i = i / 10;
    }
    if (n == sum) {
    printf ("\nThe number %d is an armstrong number",n);
    }
    else {
    printf ("\nThe number %d is not an armstrong number",n);
    }
}
    return 0;
}
// This program finds whether a number is armstrong number or not.