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
    
    // Insertion Sort Algorithm
    for(int i = 1; i < n; i++) {
        int j = i;
        while(j >= 0 && arr[j-1] > arr[j]) {
            // Swap arr[j] and arr[j-1]
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}