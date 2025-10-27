#include <stdio.h>
void factorial (int n) {
    if (n == 0) return ;
    printf ("%d\n",n); 
    factorial (n-1); 
    return ;
}

int main () {
    int n;
    printf ("Enter n: ");
    scanf ("%d",&n);

    factorial (n);

    return 0;
}