#include <stdio.h>
int main () {
    int arr [8] = {1,2,3,4,5,6,7,8};
    int aer [8];
    for (int i = 0; i <= 7; i++) {
        aer [i] = arr [7-i];
    }
    for (int j = 0; j <= 7; j++) {
        
        printf ("%d",aer [j]);
    }

    return 0;
}