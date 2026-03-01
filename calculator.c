#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;
    
    printf("=== SIMPLE CALCULATOR ===\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero!\n");
                return 1;
            }
            printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
            break;
        case '%':
            if(num2 != 0 && (int)num1 == num1 && (int)num2 == num2) {
                result = (int)num1 % (int)num2;
                printf("\n%d %% %d = %d\n", (int)num1, (int)num2, (int)result);
            } else {
                printf("Error: Modulus works only on integers!\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator '%c'!\n", operator);
            printf("Supported: +, -, *, /, %%\n");
            return 1;
    }
    
    return 0;
}
