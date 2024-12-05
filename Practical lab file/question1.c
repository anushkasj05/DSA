#include <stdio.h>

int main() {
    int size, i;

    scanf("%d", &size);  // Input size of the array
    int arr[size];

    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);  // Input array elements
    }

    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Output array elements
    }

    return 0;
}
