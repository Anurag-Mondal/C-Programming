// Q.) Given an array containing elements from 1 to 10 except one element in
//     this range is missing. Find the missing element.

#include <stdio.h>

int main () {
int arr [10] = {1,2,3,4,6,7,8,9,10};
int sum = 55;

int sum2 = 0;

for (int i = 0; i <= 8; i++) {   // This is linear search method.
    sum2 = sum2 + arr [i];
}

printf ("%d is the missing element.",(sum - sum2));

    return 0;
}