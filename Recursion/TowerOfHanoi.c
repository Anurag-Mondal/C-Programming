#include <stdio.h>
void Tower (int n, char source, char helper, char destination) {
    if (n==0) return;
    Tower (n-1,source,destination,helper);
    printf ("%c -> %c\n",source,destination);
    Tower (n-1,helper,source,destination);
    return;
}

int main () {
    int n;
    printf ("Enter n: ");
    scanf ("%d",&n);

    Tower (n,'A','B','C');

    return 0;
}

// Total number of steps is 2^n - 1