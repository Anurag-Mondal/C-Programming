#include <stdio.h>
int main () {
    int n;

    printf ("Enter number of rows and columns: ");
    scanf ("%d",&n);
    
    for (int i = 1; i <= n; i++) {                      // No. of rows -> i
        for (int j = 1; j <= n ; j++) {                 // No. of columns -> j
        printf ("%d ",j); }

        printf ("\n");
    } 

    printf ("\nThis is a number square of dimensions %d*%d",n,n);

    return 0;
}