#include <stdio.h>
int main () {
    int n;

    printf ("Enter a number: ");
    scanf ("%d",&n);
    printf ("\n");
 
    for (int i = 1; i <= n; i++) {
        
            for (int j = 1; j <= (n-i) ; j++) {
                printf ("  ");
            }
            int  l = 65;
            for (int k = 1; k <= i; k++) {
                    int ch = (char)l;
                    printf ("%c ",ch);
                    l++;
                }
                
                printf ("\n");
            }
            
            return 0;
}