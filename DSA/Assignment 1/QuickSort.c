#include <stdio.h>
#include <stdlib.h>
#include <time.h>
long count = 0;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr5[], int low, int high) {
    int i = low+1; int j = high;
    while (i<=j) {
        count+=2;
        if (arr5[i] > arr5[low] && arr5[j] <= arr5[low]) {
            swap(&arr5[i],&arr5[j]);
            i++; j--; 
        }
        else {
            count++;
            if (arr5[j] > arr5[low]) j--;
            count++;
            if (arr5[i] <= arr5[low]) i++; 
        }
    }
    swap(&arr5[low],&arr5[j]);
    return j;
}

long quick_sort (int arr5 [], int low, int high) {
    if (low < high) {
        int pivot = partition(arr5 , low, high);
        quick_sort (arr5, low, pivot-1);
        quick_sort (arr5, pivot+1, high);
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
        long count1 = quick_sort(arr,0, n-1);
        clock_t end = clock();

        clock_t start2 = clock(); count = 0;
        long count2 = quick_sort(arr,0, n-1);
        clock_t end2 = clock();
        
        double time_taken = (double)(end-start) / CLOCKS_PER_SEC * 1000000.0;
        double time_taken2 = (double)(end2-start2) / CLOCKS_PER_SEC * 1000000.0;
        printf("Input array size: %d | No. of comparisons: %ld | Machine Computation Time: %lf microseconds [After Sorting] No. of comparisons: %ld |Machine Computation Time: %lf microseconds\n",n, count1, time_taken, count2, time_taken2); free(arr);
    }
}