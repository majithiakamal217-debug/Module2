#include <stdio.h>

int main() {
    int i;
    
    printf("for loop (1-10):\n");
    for(i=1; i<=10; i++) {
        printf(" %d \n ", i);
    }
    printf("\n\n");
    
    printf("while loop (1-10):\n");
    i = 1;
    while(i <= 10) {
        printf(" %d \n ", i);
        i++;
    }
    printf("\n\n");
    
    printf("do-while loop (1-10):\n");
    i = 1;
    do {
        printf(" %d ", i);
        i++;
    } while(i <= 11);
    
    return 0;
}
