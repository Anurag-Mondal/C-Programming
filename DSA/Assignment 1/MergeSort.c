#include <stdio.h>
#include <stdlib.h>
#include <time.h>
long count = 0;
long merge_sort(int arr[], int low, int high) {
    if (low >= high) return count;
    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);

    int temp[high - low + 1];
    int left = low; int right = mid + 1; int k = 0;

    while (left <= mid && right <= high) {
        count++;
        if (arr[left] <= arr[right]) {
            temp[k++] = arr[left++]; }
        else {
            temp[k++] = arr[right++];
        }
    }
    while (left <= mid) {
        temp[k++] = arr[left++];
    }
    while (right <= high) {
        temp[k++] = arr[right++];
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return count;
}

int main(int argc, char* argv[]) {
    int t = atoi(argv[1]);
    srand(time(NULL));

    for (int i = 0; i < t; i++) {
        int n = atoi(argv[i + 2]);
        int* arr = (int*)malloc(n * sizeof(int));

        for (int j = 0; j < n; j++) {
            arr[j] = rand() % 10000;
        }

        clock_t start = clock(); count = 0;
        long count1 = merge_sort(arr,0, n-1);
        clock_t end = clock();

        clock_t start2 = clock(); count = 0;
        long count2 = merge_sort(arr,0, n-1);
        clock_t end2 = clock();

        double time_taken = (double)(end-start) / CLOCKS_PER_SEC * 1000000.0;
        double time_taken2 = (double)(end2-start2) / CLOCKS_PER_SEC * 1000000.0;
        printf("Input array size: %d | No. of comparisons: %ld | Machine Computation Time: %lf microseconds [After Sorting] No. of comparisons: %ld |Machine Computation Time: %lf microseconds\n",n, count1, time_taken, count2, time_taken2);
        free(arr); 
    }
}