#include <stdio.h>

int main() {
    int n, pos, value, i;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &value);

    if(pos >= 0 && pos < n) {
        arr[pos] = value;
    } else {
        printf("Invalid position\n");
    }

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
