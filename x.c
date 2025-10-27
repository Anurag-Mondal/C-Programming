#include <stdio.h>
int main () {
    int m;
    printf ("Enter no. of rows of a matrix: ");
    scanf ("%d", &m);

    int n;
    printf ("Enter no. of columns of a matrix: ");
    scanf ("%d", &n);

    int a [m][n];
    printf ("Enter elements of matrix: ");
    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j ++) {
            scanf ("%d",&a [i][j]);
        }
    }
    printf ("\n");

    for (int j = 0; j < n; j++) {

        if (j%2 == 0) {
            for (int i = m-1; i >= 0; i--) {
                printf ("%d ",a[i][j]);
            }
        }
        if (j%2 != 0) {
            for (int i = 0; i <= m; i++) {
                printf ("%d ",a[i][j]);
            }
        }
        
    }

    
    return 0;
}

// 1 2 3
// 4 5 6
// 7 8 9