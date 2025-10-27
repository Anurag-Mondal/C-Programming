#include <stdio.h>
int main () {
    int n;
    printf ("Enter the no of fibonacci terms you want to print:");
    scanf ("%d",&n);
    int a = 1;
    int b = 1;
    int sum;
    if (n<1) {printf ("\nEnter a number greater than or equal to 1");}
    if (n == 1) {printf ("\nThe 1st fibonacci number is 1");}
    if (n == 2) {printf ("\nThe first 2 fibonacci numbers are 1 1");}
    if (n >= 3) {
        printf ("\nThe first %d fibonacci numbers are 1 1",n);
    for (int f = n-2; f >= 1; f--){
        sum = a + b;
        a = b;
        b = sum;
        printf (" %d",sum);
    }
}
    return 0;
}
// This program prints first n fibonacci numbers.