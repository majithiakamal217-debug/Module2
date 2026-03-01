#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    
    printf("Enter a value of a: ");
    scanf("%d", &a);
    
    printf("Enter a value of b: ");
    scanf("%f", &b);  
    
    printf("Enter a value of c: ");
    scanf(" %c", &c);  
    
    printf("Answer of a: %d\n", a);
    printf("Answer of b: %.2f\n", b);
    printf("Answer of c: %c\n", c);
    return 0;
}
