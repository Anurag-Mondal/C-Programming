// Either one or two steps are allowed

#include <stdio.h>
int path (int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return path (n-2) + path (n-1);
}

int main () {
    int n;
    printf ("Enter number of steps: ");
    scanf ("%d",&n);
    int x = path (n);
    printf ("%d",x);

    return 0;
}