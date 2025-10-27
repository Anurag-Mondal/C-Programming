#include <stdio.h>
int power (int  a,int b) {
    if (b == 0) return 1;
    int x = a * power (a,(b-1)); // return type
    return x;
}

int main () {
    int  a,b;
    printf ("Enter base: ");
    scanf ("%d",&a);
    printf ("Enter exponent: ");
    scanf ("%d",&b);

    long long int p = power (a,b);
    printf ("%d raised to the power %d  is %d.",a,b,p);

    return 0;
}