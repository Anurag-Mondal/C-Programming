#include <stdio.h>
int main () {
    int a;
    printf ("Enter a: ");
    scanf ("%d",&a);
    int b;
    printf ("Enter b: ");
    scanf ("%d",&b);

    int temp = b; // Different Variable
    b = a;
    a = temp;

    printf (" a = %d\nb = %d",a,b);

    return 0;
}