#include <stdio.h>
int main () {
    int n;

    printf ("Enter a number: ");
    scanf ("%d",&n);
    printf ("\n");
 
    int a;
    for (int i = 1; i <= n; i++) {

         if (i%2 == 0) { a = 0; } else { a = 1; }
            
            for (int j = 1; j <= i ; j++) {

                printf ("%d",a);
                if (a == 0) { a = 1;} else { a = 0;}

            }

            printf ("\n");
    }
        
    return 0;
}
// Method 1

#include <stdio.h>
int main () {
    int n;

    printf ("Enter a number: ");
    scanf ("%d",&n);
    printf ("\n");
 
    int a;
    for (int i = 1; i <= n; i++) {
            
            for (int j = 1; j <= i ; j++) {
                if ( (i+j)%2 == 0 )
                printf ("1");
                else printf ("0");
            }
            printf ("\n");
    }
        
    return 0;
}

// Method 2 (Efficient)