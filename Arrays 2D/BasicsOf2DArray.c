#include <stdio.h>
int main () {

    int a [3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; // It is a matrix of order 3 x 4. 3 rows 4 columns.

    int b [3] [4] = {1,2,3,4,5,6,7,8,9,10,11,12}; // Another way of writing

    int c [3] [3];  
    for ( int i = 0; i < 3; i++) {  
        for ( int j = 0; j < 3; j++) {
            printf ("Enter value of index (%d,%d): ",i,j);  // Taking input in 2D array through loops
            scanf ("%d",&c[i][j]);
        }
    }            

    for ( int i = 0; i < 3; i++) {       
        for ( int j = 0; j < 3; j++) {
            printf ("%d ",c[i][j]);  // Printing output through loops
        }
        printf ("\n");
    }

    return 0;
}