#include <stdio.h> 

int main () {
    int m;
    printf ("Enter a no. of lines: ");
    scanf ("%d",&m);
    int n = m-1;

    for (int i = 0; i <= n; i++) {

        for (int l = n-i; l >= 0; l--) {
            printf (" ");
        }

        int x = 1;
        for (int j = 0; j <= i; j++) {

            printf ("%d ",x);
            x = x * (i-j) / (j+1);  
        }

        printf ("\n");
    }

    return 0;
}