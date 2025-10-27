// Q. Find the no. of pairs whose sum is 12 and also print the pairs

#include <stdio.h>
int main () {
    int arr [8] = {1,2,3,4,5,6,7,8};
    int count = 0;
    for (int i = 0; i <= 6; i++) {
        for (int x = i + 1; x <= 7; x++) {
            if (arr [i] + arr [x] == 12) {
                count ++;
                printf ("(%d,%d) ",arr [i], arr [x]);
            }
        }
    }
    printf ("\n%d pairs",count);

    return 0;
}