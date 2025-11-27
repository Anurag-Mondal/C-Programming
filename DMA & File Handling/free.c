#include <stdio.h>
#include <stdlib.h>
int main () {

    int* ptr = (int*) malloc (8 * sizeof(int));
    int* p;
    ptr++;
    free (p);
    return 0;
}