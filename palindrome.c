#include <stdio.h>

int isPalindromeNumber(int num) {
    int original = num, reversed = 0, digit;
    
    while(num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    return (original == reversed);
}

int isPalindromeString(char str[]) {
    int i = 0, j = 0;
    while(str[i] != '\0') i++;
    i--;
    
    while(j < i) {
        if(str[j] != str[i]) return 0;
        j++;
        i--;
    }
    return 1;
}

int main() {
    int num;
    char str[50];
    
    printf("Number enter karo: ");
    scanf("%d", &num);
    
    if(isPalindromeNumber(num))
        printf("%d PALINDROME number hai\n", num);
    else
        printf("%d palindrome nahi hai\n", num);
    
    printf("\nString enter karo: ");
    scanf("%s", str);
    
    if(isPalindromeString(str))
        printf("%s PALINDROME string hai\n", str);
    else
        printf("%s palindrome nahi hai\n", str);
    
    return 0;
}
