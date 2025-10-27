// Q. Rotate the array by 3 steps.

#include <stdio.h>
void reverse(int ar [],int i,int j) {
for ( int k = i, l = j; k < l; k++, l-- ) {
        int temp = ar [k];
        ar [k] = ar [l];
        ar [l] = temp;
    }
    return;
}

int main () {
    
    int numberofelements;
    printf ("Enter number of elements: ");
    scanf ("%d",&numberofelements);
    int arr [numberofelements];

    for ( int x = 0; x <= (numberofelements-1); x++ ) {
        printf ("Enter element of index %d: ",x);
        scanf ("%d",&arr[x]);
    }

    int rotate;
    printf ("Enter number of rotations: ");
    scanf ("%d",&rotate);

    int k = rotate % numberofelements;

    reverse (arr,0,(numberofelements-1));
    reverse (arr,0,(k-1));
    reverse (arr,k,(numberofelements-1));

    for (int j = 0; j <= 6; j++) {
        printf ("%d ",arr [j]);
    }

    return 0;
}