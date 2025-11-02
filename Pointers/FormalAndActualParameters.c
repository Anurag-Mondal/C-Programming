#include <stdio.h>
// 'a' and 'b' here are the "Formal Parameters"
int add (int a,int b) { 
   return a+b;
}

int main () {
    int a,b;
    printf ("Enter a: ");
    scanf ("%d",&a);
    printf ("Enter b: ");
    scanf ("%d",&b);

    // 'a' and 'b' here are the "Actual Arguments".
    // Their values are passed to the function's formal parameters.
    int sum = add (a,b); 

    printf ("The sum is: %d\n",sum); // Added \n for cleaner output

   return 0;
}