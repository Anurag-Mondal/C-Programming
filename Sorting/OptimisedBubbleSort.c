#include <stdio.h>
#include <stdbool.h>
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

    // Bubble Sort Algorithm with optimization
    for(int i = 0; i < n-1; i++) {
        bool flag = true;           // True means array is sorted
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                flag = false;               // False means array is not sorted               // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(flag == true) break;
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}