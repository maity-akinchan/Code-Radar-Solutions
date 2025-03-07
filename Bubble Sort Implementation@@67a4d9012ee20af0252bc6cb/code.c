#include <stdio.h>

int printArray(int arr, int n) {
    for (int i = 0; i < n; i++) {
        print("%d ", arr[i]);
    }
}

int bubbleSort(int arr, int n) {
    while (true) {
        int swaps = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i+1]) {
                int garb = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = arr[i];
                swaps++;
            }
        }
        if (swaps == 0) {
            break;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}