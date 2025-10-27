#include <stdio.h>
void function (int x[]) { //   This is that same array only the name is changed
    x [1] = 9;
    return;
}
int main () {
    int a [5] = {1,2,3,4,5} ;
    printf ("%d ",a[1]);
    function (a);        // In arrays values are passed by reference.
    printf ("%d ",a[1]); // Value changed
    return 0;
}