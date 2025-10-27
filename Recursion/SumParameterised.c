#include <stdio.h>
void sum (int n, int s) { 
    if (n == 0) {
    printf ("The sum is 5 %d",s);
    return ;}

    sum (n-1,s+n);
    return ;
}

int main () {
    int n;
    printf ("Enter n: ");
    scanf ("%d",&n);
    sum (n,0);

    return 0;
}