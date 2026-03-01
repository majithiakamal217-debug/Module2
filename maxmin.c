#include <stdio.h>

int main() {
    int arr[10], i, max, min, temp;
    
    printf("10 integers enter karo:\n");
    for(i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    
    max = min = arr[0];
    for(i=1; i<10; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    
    printf("\nMaximum: %d\n", max);
    printf("Minimum: %d\n", min);
    
    printf("\nSorted array (ascending):\n");
    for(i=0; i<10; i++) {
        for(int j=i+1; j<10; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
