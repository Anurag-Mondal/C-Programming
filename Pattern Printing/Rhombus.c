#include <stdio.h>
int main () {
    int n;
    printf ("Enter an even number: ");
    scanf ("%d",&n);
    printf ("\n");

    int nsp = n-1;
    for (int i = 1; i<=n;i++) {
        for (int j = 1; j <= nsp; j++) {
            printf (" ");
        }
        nsp--;
        
        for (int k = 1; k<=n; k++) {
            printf ("* ");
        }
        printf ("\n");   
    }
    return 0;
}