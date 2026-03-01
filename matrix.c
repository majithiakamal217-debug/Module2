#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], result[3][3];
    int i, j;
    
    printf("3x3 Matrix 1 enter karo:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("3x3 Matrix 2 enter karo:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    printf("\nMatrix Addition:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf("%4d ", result[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix Multiplication:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            result[i][j] = 0;
            for(int k=0; k<3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%6d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
