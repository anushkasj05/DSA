#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, key;
    bool found = false;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = true;
            break;
        }
    }

    if(found) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
