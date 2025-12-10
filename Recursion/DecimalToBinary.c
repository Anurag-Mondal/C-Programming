#include <stdio.h>
#include <stdbool.h>
void binary (int n) {
    if (n == 0) return;
    bool boool = n % 2; int q = n / 2;
    binary (q);
    printf ("%d",boool);
    return;
}

int main () {
    int n;
    printf ("Enter a decimal no. : "); scanf ("%d",&n);
    printf ("The binary no. is : ");
    binary (n);
    return 0;
}