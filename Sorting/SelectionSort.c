#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entered array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Selection Sort Algorithm
    for(int i = 0; i < n-1; i++) {
        int min = INT_MAX;
        int index = -1;
        for(int j = i; j < n; j++) {
            if(arr[j]<min) {
                min = arr[j];
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}