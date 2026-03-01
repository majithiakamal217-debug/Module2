#include <stdio.h>

int main() {
    int num, range;
    
    printf("Multiplication table ka number: ");
    scanf("%d", &num);
    
    printf("Range tak (1 se N): ");
    scanf("%d", &range);
    
    printf("\n%d ka table (1 se %d):\n", num, range);
    printf("==================\n");
    
    for(int i=1; i<=range; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
    return 0;
}
