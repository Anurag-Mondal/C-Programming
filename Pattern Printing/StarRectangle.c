#include <stdio.h>
int main () {
    int row,column;

    printf ("Enter number of rows: ");
    scanf ("%d",&row);
    printf ("\nEnter number of column: ");
    scanf ("%d",&column);

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) { // Take different variables 'j'
        printf ("* "); }

        printf ("\n");
    }

    printf ("\nThis is a rectangle of dimensions %d*%d",row,column);

    return 0;
}