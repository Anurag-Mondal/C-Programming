#include <stdio.h>
int main () {
    int arr [7] = {1,2,3,4,1,2,3};
    for (int i = 0; i <= 6; i++) {
        int x = 1 ;
        for (int j = i+1; j <= 6; j++) {
            if (arr [i] == arr [j]) {
                x = 0;
            }
        }
        if (x == 1) {
        printf ("%d is an unique element\n",arr [i]); 
        break;}
    }
    return 0;
}