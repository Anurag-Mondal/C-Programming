#include <stdio.h>
#include <math.h> // The sqrt,pow function is present in math.h library

int main () {
int a;
printf ("Enter a number: ");
scanf ("%d",&a);

float squareroot = sqrt(a);

printf ("The square root of %d is %f",a,squareroot);
    return 0;
}