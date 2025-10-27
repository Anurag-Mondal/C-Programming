#include <stdio.h>
int add (int a,int b) { // int a, int b are *argument parameters*
    return a+b;  
}

int main () {
int a,b;
printf ("Enter a: ");
scanf ("%d",&a);
printf ("Enter b: ");
scanf ("%d",&b);

int sum = add (a,b); // a & b are "Formal Parmeters" & the values of a & b are actual parameters.

printf ("The sum is: %d",sum);  

    return 0;
}