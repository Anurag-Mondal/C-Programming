#include <stdio.h>

void PreInPost (int n) {
    if (n==0) return;
    printf ("Pre %d\n",n);
    PreInPost (n-1);
    printf ("In %d\n",n);
    PreInPost (n-1);
    printf ("Post %d\n",n); //See euler tree diagram
    return;
}

int main () {
    int n;
    printf ("Enter n: ");
    scanf ("%d",&n);

    PreInPost (n);

    return 0;
}