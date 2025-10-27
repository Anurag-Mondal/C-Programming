#include <stdio.h>
int main () {
    int n;                                 // n = number of horizontal lines
    printf ("Enter an odd number: ");
    scanf ("%d",&n);
    printf ("\n");

    int m = (n-1);
    int nsp = 1;
    int nst = m;
    int nst_= m;

    for (int b = 1; b<=2*m+1; b++) {
        printf ("*");
    }
    printf ("\n");

    for (int i = 1; i<=m; i++) {

        for (int j = 1; j <= nst; j++) {
            printf ("*");
        }
        nst--;
        
        for (int k = 1; k <= nsp; k++) {
            printf (" ");
        }
        nsp+=2;
        
        for (int k = 1; k <= nst_; k++) {
            printf ("*");
        }
        nst_--;

        printf ("\n");
    }
    return 0;
}