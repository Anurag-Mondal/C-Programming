#include <stdio.h>
int sum (int n) { 
    if (n == 1) {
    return 1;}
    int ans = n + sum (n-1); // return type
    return ans ;
}

int main () {
    int n;
    printf ("Enter n: ");
    scanf ("%d",&n);
    int x = sum (n);
    printf ("The sum is %d",x);

    return 0;
}