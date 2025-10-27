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

    // Spiral Print
    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;
    int tnoe = m*n;
    int count = 0;
    
    while (count <= tnoe ) {
        for ( int j = minc; j <= maxc; j++) {
            printf ("%d ",a [minr][j]);
            count ++;
        }
        if (count >= tnoe) break;
        minr++;
        for ( int i = minr; i <= maxr; i++) {
            printf ("%d ",a [i][maxc]);
            count ++;
        }
        if (count >= tnoe) break;
        maxc--;
        for ( int j = maxc; j >= minc; j--) {
            printf ("%d ",a [maxr][j]);
            count ++;
        }
        if (count >= tnoe) break;
        maxr--;
        for ( int i = maxr; i >= minr; i--) {
            printf ("%d ",a [i][minc]);
            count ++;
        }
        if (count >= tnoe) break;
        minc++;
    }
    
    return 0;
}

// 1 2 3
// 4 5 6
// 7 8 9