#include <stdio.h>

int main() {
    int arr[] = { 3, 0, 4, 1, 5, 9, 2, 6, 50, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // sort the array using selection sort
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

