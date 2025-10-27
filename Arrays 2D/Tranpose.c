// For rotation first take transpose then reverse the elements in each row
#include <stdio.h>
int main () {
    int m;
    printf ("Enter no. of rows of a matrix: ");
    scanf ("%d", &m);

    int n;
    printf ("Enter no. of columns of a matrix: ");
    scanf ("%d", &n);

    int a [m][n];
    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j ++) {
            printf ("Enter the (%d,%d) elements of matrix: \n",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("\n");

    printf ("The original matrix is: \n");

    for ( int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf ("%d ",a[i][j]);
        }
        printf ("\n");
    }

    // Transpose Printing
    printf ("The tranpose matrix is: \n");

    for ( int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf ("%d ",a[j][i]);
        }
        printf ("\n");
    }

    return 0;
}