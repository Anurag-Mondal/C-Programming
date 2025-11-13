#include <stdio.h>
int main () {       // () is reserved for functions, [] is used for arrays
    
              //  0 1 2  3  4 ---> index
             //   | | |  |  |           
    int arr[5] = {2,5,2,312,3}; // 'arr' is the name of the array by convention the name is taken as arr.
    printf ("%d\n",arr[3]); // Printing the value at index 3.

    float arrr[5] = {2.67,5.34,2.84,3.12,3.44}; // Float array
    arrr[3] = 8.9;         // Updation of value at index 3
    printf ("%f\n",arrr[3]);

    char arrrr[5] = {'a','b','c','d','e'}; // Character array (String)
    arrrr[2] = 'g';          // Updation of value at index 2
    printf ("%c\n",arrrr[2]);


    
    int a[5];
    for ( int i = 0; i <= 4; i++) {
        printf ("Enter value of index %d: ",i);
        scanf ("%d",&a[i]);
    }                                  //Taking input in arrays through loops 
    for ( int j = 4; j >= 0; j--) {
        printf ("%d ",a[j]);
    }                                  // Printing arrays through loops (output)


    // Other way to declare array
    // int size = 10, arr [size];

    int b [5] = {1,2,3,4,5};
    for (int t = 0; t <= 4; t++) {
        printf ("%p\n",&b[t]);      // Address is continuous in arrays. Each integer occupies 4 bytes
    }

    return 0; 
}