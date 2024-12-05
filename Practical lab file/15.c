#include <stdio.h>

int sequentialSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 8, 12, 15, 20};
    int target = 12;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = sequentialSearch(arr, size, target);
    printf("%d\n", result);
    return 0;
}
