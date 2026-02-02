#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
void swap (int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort (int arr[], int n) {
    for (int i = n-2; i >= 0; i--) {
        bool flag = true;
        for (int j = 0; j <= i; j++) {
            if (arr[j] > arr[j+1]) {
                flag = false;
                swap(&arr[j], &arr[j+1]);
            }
        }
        if (flag == true) break;
    }
}
int binary_Search (int arr[],int low, int high, int target) {
    if (low > high) return -1;
    int mid = low + ((high - low)/2);
    if (target < arr[mid]) {
        return binary_Search (arr, low, mid-1, target);
    }
    else if (target > arr[mid]) {
        return binary_Search (arr, mid+1, high, target);
    }
    if (target == arr[mid]) {
        return mid;
    }
}
int main (int argc, char* argv[]) {
    int t = atoi(argv[1]);
    srand(time(NULL));
    for (int i = 0; i < t; i++) {
        int n = atoi(argv[i+2]);
        int* arr = (int*)malloc(n*sizeof(int));
        for (int j = 0; j < n; j ++) {
            arr[j] = rand() % 10000;
        }
        bubble_sort(arr, n); int iterate = 10000000;

        clock_t start = clock(); // calculating Machine computaion time (worst case)
        for (int x = 0; x < iterate; x++) {
            int index = binary_Search(arr, 0, n-1,-1);
        }
        clock_t end = clock();

        clock_t start2 = clock(); // calculating Machine computaion time (best case)
        for (int y = 0; y < iterate; y++) {
            int index2 = binary_Search(arr,0,n-1,arr[(n-1)/2]);
        }
        clock_t end2 = clock();

        double time_taken = ((double)(end-start)/CLOCKS_PER_SEC * 1000000000) / iterate;
        double time_taken2 = ((double)(end2-start2)/CLOCKS_PER_SEC * 1000000000) / iterate;
        printf("Input array size: %d | Machine Computation Time: %lf nanoseconds (worst case) & %lf nanoseconds (best case)\n",n, time_taken, time_taken2);
        free(arr);
    }
}