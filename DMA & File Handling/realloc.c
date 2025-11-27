#include <stdio.h>
#include <stdlib.h>
int main () {

    int* ptr = (int*) malloc (2 * sizeof(int)); // 32 bytes allocated
    printf ("%p\n",ptr);
    ptr = realloc (ptr, 9*4); // 40 bytes allocated
    printf ("%p\n",ptr);
    return 0;
}