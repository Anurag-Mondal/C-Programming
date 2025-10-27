#include <stdio.h>
int main () {
    int n;

    printf ("Enter number of rows and columns: ");
    scanf ("%d",&n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n-i)+1  ; j++) {
        printf ("* "); }

        printf ("\n");
    }

    printf ("\nThis is a reverse star triangle of equal length of perpendicular and base");

    return 0;
}