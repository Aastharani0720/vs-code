#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int size = 5;                        
    int num = 25;                        
    int pos = 3;                         
    
    // Shift elements to the right to make space
    for (int i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos - 1] = num;  
    size++;             
    
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}