#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;   // element found
        }
        else if (arr[mid] < key) {
            low = mid + 1;   // search right side
        }
        else {
            high = mid - 1;  // search left side
        }
    }
    return -1;  // element not found
}

int main() {
    int arr[100], n, key, result;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted elements
    printf("Enter elements (in sorted order):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Function call
    result = binarySearch(arr, n, key);

    // Output
    if(result != -1) {
        printf("Element found at index: %d", result);
    } else {
        printf("Element not found");
    }

    return 0;
}
