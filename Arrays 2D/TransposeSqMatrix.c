// This method is only for square matrix.
#include <stdio.h>
int main () {
    int n;
    printf ("Enter no. of rows/columns of a matrix: ");
    scanf ("%d", &n);

    int a [n][n];
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            printf ("Enter the (%d,%d) elements of matrix: \n",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("\n");

    printf ("The original matrix is: \n");

    for ( int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf ("%d ",a[i][j]);
        }
        printf ("\n");
    }

    //Transposing
    for ( int i = 0; i < n; i++) {
        for (int j = (i+1); j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // Transpose Printing
    printf ("The tranpose matrix is: \n");

    for ( int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf ("%d ",a[i][j]);
        }
        printf ("\n");
    }

    return 0;
}