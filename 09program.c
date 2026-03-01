#include <stdio.h>

int main() {
   
    int arr1D[5];
    printf("=== 1D Array (5 numbers) ===\n");
    
    printf("5 numbers enter karo: ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr1D[i]);
    }
    
    printf("Array elements: ");
    for(int i=0; i<5; i++) {
        printf("%d ", arr1D[i]);
    }
    printf("\n\n");
    
 
    int matrix[3][3];
    int sum = 0;
    
    printf("=== 2D Array (3x3 Matrix) ===\n");
    printf("9 elements enter karo (row-wise):\n");
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  
        }
    }
    
    printf("\nMatrix:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTotal Sum: %d\n", sum);
    
    return 0;
}
