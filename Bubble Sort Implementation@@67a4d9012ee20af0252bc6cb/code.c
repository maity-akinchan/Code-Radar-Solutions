#include <stdio.h>

int printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int bubbleSort(int* arr, int n) {
    while (1) {
        int swaps = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i+1]) {
                int garb = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = garb;
                swaps++;
            }
        }
        if (swaps == 0) {
            break;
        }
    }
}