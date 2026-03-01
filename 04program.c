#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter a two integer a and b:- ");
    scanf("%d %d", &a, &b);
    
    printf("\n=== ARITHMETIC ===\n");
    
	printf("Sum: %d\n", a + b);
    
	printf("Difference: %d\n", a - b);
    
	printf("Product: %d\n", a * b);
    
	printf("Division: %d\n", a / b);
    
	printf("Remainder: %d\n", a % b);
    
    printf("\n=== RELATIONAL ===\n");
    
	printf("a > b: %d\n", a > b);
    
	printf("a == b: %d\n", a == b);
    
	printf("a <= b: %d\n", a <= b);
    
    
	printf("\n=== LOGICAL ===\n");
    
	printf("Both positive: %d\n", (a > 0 && b > 0));
    
	printf("One positive: %d\n", (a > 0 || b > 0));
    
	printf("a not > b: %d\n", !(a > b));
    
    return 0;
}
