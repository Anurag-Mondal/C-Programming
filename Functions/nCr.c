#include <stdio.h>

int f (int x) {
    int y = 1;
    for (int z = 1; z <= x; z++) {
        y = y*z;
    }
    return y;
}

float combination (int a,int b) {
    float ncr = f(a)/(f(b)*f(a-b)); // Calling f function
    return ncr;
}

int main () {
    int n,r;
    printf ("Enter n: ");
    scanf ("%d",&n);
    printf ("Enter r: ");
    scanf ("%d",&r);

    float ncr = combination(n,r); // Calling combination function
    printf ("%f",ncr);
    return 0;
}