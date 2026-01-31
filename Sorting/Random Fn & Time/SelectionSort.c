#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap (int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
long selection_sort(int arr [],int n) {
    long count = 0;
    for (int i = 0; i <= n-2; i++) {
        int minIndex = i; // Let assume this index to be minimum
        for (int j = i+1; j <= n-1; j++) {
            count++;
            if (arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(&arr[i], &arr[minIndex]);
    }
    return count;
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
        clock_t start = clock(); // calculating Machine computaion time and Comparison time for random array (avg or worst case)
        long count = selection_sort(arr, n);
        clock_t end = clock();

        clock_t start2 = clock(); // calculating Machine computaion time and Comparison time for sorted array (best case)
        long count2 = selection_sort(arr, n);
        clock_t end2 = clock();

        double time_taken = (double)(end-start)/CLOCKS_PER_SEC * 1000000.0;
        double time_taken2 = (double)(end2-start2)/CLOCKS_PER_SEC * 1000000.0;
        printf("Input array size: %d | No. of comparisons: %ld | Machine Computation Time: %lf microseconds [After Sorting] No. of comparisons: %ld | Machine Computation Time: %lf microseconds\n",n,count,time_taken, count2,time_taken2);
        free(arr);
    }
}