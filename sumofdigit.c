#include <stdio.h>

int main() {
    int num, original, digit, sum = 0, reverse = 0;
    
    printf("Number enter karo: ");
    scanf("%d", &num);
    original = num;
    
    printf("\nDigit sum calculation:\n");
    while(num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    
    printf("Sum of digits: %d\n", sum);
    
    num = original;
    printf("\nReverse digits:\n");
    while(num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    
    printf("Reversed number: %d\n", reverse);
    
    return 0;
}
