#include <stdio.h>
int main () {
    int n;

    printf ("Enter a number: ");
    scanf ("%d",&n);
    printf ("\n");
    
    
    for (int i = 1; i <= n; i++) {
        
            for (int j = 1; j <= (n-i) ; j++) {
                printf (" ");
            }
            
            for (int k = 1; k <= i; k++) {
                int ch = (char)(k+64);
                printf ("%c",ch);    
            }

            int x = (i-1);
            for (int l = 1; l <= (i-1); l++) {
                int ch = (char)(x+64);
                printf ("%c",ch);
                x--;
            }
            
            printf ("\n");
    }
            
   return 0;
}