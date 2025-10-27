#include <stdio.h>
int main () {
    int n;

    printf ("Enter number of rows and columns: ");
    scanf ("%d",&n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i ; j++) {
        printf ("%d ",j); }

        printf ("\n");
    } 

    printf ("\nThis is a number triangle of equal length of perpendicular and base");

    return 0;
}