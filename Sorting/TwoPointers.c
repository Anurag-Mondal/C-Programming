// Q.)  Given an array of integers numbers that is
// already sorted in non-decreasing order, find two
// numbers such that they add up to a specific target
// number.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers in sorted order: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    int i = 0, j = n - 1;
    bool found = false;

    while(i < j) {
        int sum = arr[i] + arr[j];
        if(sum == target) {
            printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
            found = true;
            break;
        } 
        else if(sum < target) i++;
        else j--;
    }

    if(found == false) {
        printf("No pair found that adds up to %d\n", target);
    }

    return 0;
}