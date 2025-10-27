#include <stdio.h>
int main () {
    // 1 2
    // 3 4
    // 5 6
    int a [3][2] = {{1,2},{3,4},{5,6}};

    // 1 2 3 4
    // 5 6 7 8
    int b [2] [4] = {{1,2,3,4},{5,6,7,8}};

    int res [3] [4]; 
    // multiplying
    for (int i = 0; i < 3; i++) {
        for ( int j = 0; j < 4; j++) {
            res [i][j] = (a[i][0]*b[0][j]) + (a[i][1]*b[1][j]); // Learn (i 0 0 j) + (j 1 1 j)
        }
    }
    // Printing
    for (int i = 0; i < 3; i++) {
        for ( int j = 0; j < 4; j++) {
            printf ("%d ",res[i][j]);
        }
        printf ("\n");
    }

    return 0;
}