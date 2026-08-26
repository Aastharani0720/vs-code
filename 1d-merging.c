#include <stdio.h>

int main() {
    
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6, 7};
    
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    
    int merged[n1 + n2];
    int i, index = 0;

   
    for (i = 0; i < n1; i++) {
        merged[index] = arr1[i];
        index++;
    }

   
    for (i = 0; i < n2; i++) {
        merged[index] = arr2[i];
        index++;
    }

    
    printf("Merged Array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}