#include <stdio.h>

int main() {

    int arr[] = {12, 5, 8, 45, 23, 9};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int searchToken = 23;                    
    int foundIndex = -1;                     


    for (int i = 0; i < size; i++) {
        if (arr[i] == searchToken) {
            foundIndex = i; 
            break;          
        }
    }

    if (foundIndex != -1) {
        printf("Element %d found at index position: %d\n", searchToken, foundIndex);
    } else {
        printf("Element %d was not found in the array.\n", searchToken);
    }

    return 0;
}