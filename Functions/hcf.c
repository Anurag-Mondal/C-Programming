#include <stdio.h>
int minimum (int a, int b) {
    if (a<b) return a;
    else return b;     // Called function may contain more than one return
}

int gcd (int x, int y) {
    int min = minimum (x,y);
    int hcf_;
    for ( int i = min; i >= 1; i--) {
        if (x % i == 0 && y % i == 0) {
            hcf_ = i;
            break;
        }
    }
    return hcf_;
}

int main () {
    int a,b;
    printf ("Enter a: ");
    scanf ("%d",&a);
    printf ("Enter b: ");
    scanf ("%d",&b);

    int hcf = gcd (a,b);

    printf ("The HCF of %d & %d is %d",a,b,hcf);

    return 0;
}