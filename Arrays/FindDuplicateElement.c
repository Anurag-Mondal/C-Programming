#include <stdio.h>
int main () {
    int arr [7] = {1,2,7,4,4,6,7};
    for (int i = 0; i <= 6; i++) {
        for (int j = i+1; j <= 6; j++) {
            if (arr [i] == arr [j]) {
                printf ("%d is the duplicate element\n",arr [i]);
            }
        }
    }
    return 0;
}