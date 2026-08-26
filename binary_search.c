#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int data[] = {1, 3, 5, 7, 9};
    int n = sizeof(data) / sizeof(data[0]);
    int target = 7;
    int result = binarySearch(data, n, target);
    if (result != -1) printf("Index: %d", result);
    else printf("Not found");
    return 0;
}