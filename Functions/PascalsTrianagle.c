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
    int n;
    printf ("Enter a no. of lines: ");
    scanf ("%d",&n);

    for (int i = 0; i <= n-1; i++) {

        for (int l = (n-1)-(i-1); l >= 0; l--) {
            printf ("  ");
        }

        for (int j = 0; j <= i; j++) {
            int ncr = combination(i,j);
            printf ("%d ",ncr);
            printf (" ");
        }

        printf ("\n");
    }

    return 0;
}