#include <stdio.h>

int main() {
    int n;
    
    printf("Number: ");
    scanf("%d", &n);
    
    long long iter = 1;
    for(int i=1; i<=n; i++) {
        iter *= i;
    }
    printf("Iterative: %lld\n", iter);
    
    long long rec(int n) {
        if(n<=1) return 1;
        return n * rec(n-1);
    }
    
    printf("Recursive: %lld\n", rec(n));
    
    return 0;
}
