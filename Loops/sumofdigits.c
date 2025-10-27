#include <stdio.h>
int main () {
    int n;
    printf ("Enter a positive number whose sum of digits is to be found: ");
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
        sum = sum + c;
        i = i / 10; }
    printf ("The sum of the digits are %d",sum);
    }
    return 0;
}
// This program can find  the sum of digits of a positive number.