#include <stdio.h>

void reverseString(char str[]) {
    int i = 0, j = 0;
    char temp;
    
    while(str[i] != '\0') {
        i++;
    }
    i--;
    
    while(j < i) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
}

int main() {
    char str[100];
    
    printf("String enter karo: ");
    scanf("%s", str);
    
    printf("Original: %s\n", str);
    
    reverseString(str);
    
    printf("Reversed: %s\n", str);
    
    return 0;
}
