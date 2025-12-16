// #include <stdio.h>

// int main () {

// int a = 9;
// int* x = &a; // int* --> Pointer, stores the location of a
// int** y = &x; // Double Pointer, stores the location of another pointer
// int*** z = &y; // Triple Pointer, stores the location of another pointer
// int**** b = &z;
// printf ("%d",****b); // &p is used to print location

//     return 0;
// }
#include <stdio.h>

int main () {

int a = 9;
printf ("%d",a++);
printf ("%d",++a);
    return 0;
}