#include <stdio.h>

int main() {
    float a, b, c;
    
    printf("Teen numbers enter karo: ");
    scanf("%f %f %f", &a, &b, &c);
    
    printf("\nUsing if-else:\n");
    
    if(a >= b && a >= c)
        printf("Largest: %.2f\n", a);
    else if(b >= a && b >= c)
        printf("Largest: %.2f\n", b);
    else
        printf("Largest: %.2f\n", c);
    
    if(a <= b && a <= c)
        printf("Smallest: %.2f\n", a);
    else if(b <= a && b <= c)
        printf("Smallest: %.2f\n", b);
    else
        printf("Smallest: %.2f\n", c);
    
    printf("\nUsing switch (ternary helper):\n");
    float max = (a >= b) ? (a >= c ? a : c) : (b >= c ? b : c);
    float min = (a <= b) ? (a <= c ? a : c) : (b <= c ? b : c);
    
    printf("Largest: %.2f\n", max);
    printf("Smallest: %.2f\n", min);
    
    return 0;
}
