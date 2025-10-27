#include <stdio.h>
int add (int a,int b) { // int a, int b are *argument parameters*
    return a+b;  // int indicates an integer value has to be returned to the main function
}

int main () {
int a,b;
printf ("Enter a: ");
scanf ("%d",&a);
printf ("Enter b: ");
scanf ("%d",&b);

int sum = add (a,b); // 'a' & 'b' values are passed to int a and int b respectively "Pass by Value"
printf ("The sum is: %d",sum);  

    return 0;
}