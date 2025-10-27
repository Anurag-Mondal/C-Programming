#include <stdio.h>
int main () {
    int arr [8] = {1,2,3,4,5,6,7,8};
    for (int i = 0, j = 7; i < j; i++, j--) { // Note the use of comma and semicolons
        int a = arr [i];
        int b = arr [j];
        a = a + b;
        b = a - b;  // Also can use temp variable
        a = a - b;
        arr [i] = a;
        arr [j] = b;
    }

    for (int j = 0; j <= 7; j++) {
        
        printf ("%d ",arr [j]);
    }

    return 0;
}
  
//OR

#include <stdio.h>
void reverse (int ar [],int i,int j) {
    for (int k = i, l = j; k < l; k++,l--) {
        int temp = ar [k];
        ar [k] = ar [l];
        ar [l] = temp;
    }
    return;
}
int main () {
    int arr [7] = {1,2,3,4,5,6,7};
    reverse (arr,0,6);

    for (int j = 0; j <= 6; j++) {
        printf ("%d ",arr [j]);
    }

    return 0;
}