#include <stdio.h>

int main () {

int a = 9;
int* x = &a; // int* --> Pointer, stores the location of a
printf ("%p",x); // &p is used to print location

    return 0;
}