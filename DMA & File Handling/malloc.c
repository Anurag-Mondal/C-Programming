#include <stdio.h>
#include <stdlib.h>
int main () {
    int n;
    printf ("Enter number of integers: ");
    scanf ("%d", &n);

    int* ptr = (int*) malloc (n * sizeof(int));

    int* p = ptr; // p is needed because, ptr will be lost after loop ends.

    printf ("Enter integers: ");

    for (int i = 1; i <= n; i++) {
        scanf ("%d",&(*ptr));
        ptr++;
    }
    for (int i = 1; i <= n; i++) {
        printf ("%d ",(*p));
        p++;
    }

    return 0;
}