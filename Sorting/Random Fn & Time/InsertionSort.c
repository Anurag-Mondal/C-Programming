#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
void swap (int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
long insertion_sort (int arr [], int n) {
    long count = 0;
    for (int i = 0; i <= n-2; i++) { 
        for (int j = i+1; j >= 1; j--) {
            count++;
            if (arr[j]<arr[j-1]) {
                swap (&arr[j], &arr[j-1]);
            }
            else break;
        }
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
        long count = insertion_sort(arr, n);
        clock_t end = clock();

        clock_t start2 = clock(); // calculating Machine computaion time and Comparison time for sorted array (best case)
        long count2 = insertion_sort(arr, n);
        clock_t end2 = clock();

        double time_taken = (double)(end-start)/CLOCKS_PER_SEC * 1000000.0;
        double time_taken2 = (double)(end2-start2)/CLOCKS_PER_SEC * 1000000.0;
        printf("Input array size: %d | No. of comparisons: %ld | Machine Computation Time: %lf microseconds [After Sorting] No. of comparisons: %ld | Machine Computation Time: %lf microseconds\n",n,count,time_taken, count2,time_taken2);
        free(arr);
    }
}