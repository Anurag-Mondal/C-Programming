#include <stdio.h>
int main () {
    int a;
    printf ("Enter a: ");
    scanf ("%d",&a);
    int b;
    printf ("Enter b: ");
    scanf ("%d",&b);

    a = a + b; 
    b = a - b;
    a = a - b;

    printf (" a = %d\nb = %d",a,b);

    return 0;
}

// Without using another variable