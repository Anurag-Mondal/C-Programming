#include <stdio.h>

int main () {

int a = 9;
int* x = &a; 
printf ("%d",*x); // *x goes to the variable whose location is stored and prints the value of the variable.

*x = 20;            // Updation of value of a from 9 to 20 using pointers.
printf ("\n%d",*x); 

    return 0;
}