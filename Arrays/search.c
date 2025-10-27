#include <stdio.h>
#include <stdbool.h> // Header file for bool datatype

int main () {
int arr [10] = {65,85,31,95,41,92,78,62,59,49};
int x;
printf ("Enter a number: ");
scanf ("%d",&x);

bool flag = false;  // ***Boolean Datatype***
int index;

for (int i = 0; i <= 9; i++) {   // This is linear search method.
    if (x == arr [i]) {
        flag = true;
        index = i;
        break;
    }
}

if ( flag == false) printf ("%d is not present.",x);
else printf ("%d is present and its index is %d.",x,index);

    return 0;
}