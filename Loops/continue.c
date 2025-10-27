#include <stdio.h>
int main () {
    int n;
    printf ("Enter a number");
    scanf ("%d",&n);
    for (int i = 1; i <= n; i++) {
        if (i%2 != 0) {
            continue;
        }
         printf ("\n%d ",i);
    }
    return 0;
}