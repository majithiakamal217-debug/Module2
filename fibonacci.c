#include <stdio.h>

int fibonacci_recursive(int n) {
    if(n <= 1)
        return n;
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}

int fibonacci_iterative(int n) {
    int a = 0, b = 1, c, i;
    if(n == 0)
        return a;
    for(i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    
    printf("Nth Fibonacci term ka N: ");
    scanf("%d", &n);
    
    printf("\nFibonacci Sequence (1 se %d terms):\n", n);
    for(int i=0; i<n; i++) {
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");
    
    printf("\nNth term comparisons:\n");
    printf("Recursive: %d\n", fibonacci_recursive(n));
    printf("Iterative:  %d\n", fibonacci_iterative(n));
    
    printf("\nEfficiency:\n");
    if(n > 35)
        printf("Recursive SLOW hai (exponential time)!\n");
    else
        printf("Iterative FAST hai (linear time O(n))!\n");
    
    return 0;
}
