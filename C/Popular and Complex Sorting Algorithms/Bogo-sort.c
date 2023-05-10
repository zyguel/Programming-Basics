#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_sorted(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            return 0;
        }
    }
    return 1;
}

void shuffle(int arr[], int n) {
    for (int i = n-1; i > 0; i--) {
        int j = rand() % (i+1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void bogo_sort(int arr[], int n) {
    while (!is_sorted(arr, n)) {
        shuffle(arr, n);
    }
}

int main() {
    int arr[] = {5, 3, 8, 1, 2, 7, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    srand(time(NULL)); // seed the random number generator
    bogo_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
