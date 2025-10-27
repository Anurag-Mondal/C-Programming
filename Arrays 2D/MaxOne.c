#include <stdio.h>
int main () {
    int arr [3][4] = {{1,0,0,1},{0,1,1,1},{1,1,1,1}};

    int maxcount = -1;
    int index;

    for ( int i = 0; i < 3; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++) {

            if (arr[i][j] == 1) {
            count += arr [i][j];
            }
        }
        if (maxcount < count) {
            maxcount = count;
            index = i;
        }
    }
    printf ("Maximun no. of 1 is: %d\nThe row no. is: %d",maxcount,index);
    return 0;
}