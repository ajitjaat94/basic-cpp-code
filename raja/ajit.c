#include <stdio.h>

void merge(int arr[], int lb, int mid, int ub) {
    int n1 = mid - lb + 1, n2 = ub - mid;
    int L[n1], R[n2], i, j, k;

    for (i = 0; i < n1; i++) L[i] = arr[lb + i];
    for (j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    i = 0, j = 0, k = lb;
    while (i < n1 && j < n2) arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int lb, int ub) {
    if (lb < ub) {
        int mid = lb + (ub - lb) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {15, 5, 24, 8, 1, 3, 16, 10, 29};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array:\n");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf("Sorted array:\n");
    printArray(arr, size);

    return 0;
}