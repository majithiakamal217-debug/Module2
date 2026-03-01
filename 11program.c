#include <stdio.h>


int main() {
    char str1[50], str2[50];
    
    printf("Pehla string enter karo: ");
    scanf("%s", str1);      
    
    printf("Dusra string enter karo: ");
    scanf("%s", str2);
    
    printf("\nOriginal strings:\n");
    printf("String 1: %s (Length: %lu)\n", str1, strlen(str1));
    printf("String 2: %s (Length: %lu)\n", str2, strlen(str2));
    
    
    strcat(str1, str2);
    
    printf("\nAfter strcat:\n");
    printf("Concatenated: %s\n", str1);
    printf("Total length: %lu\n", strlen(str1));
    
    return 0;
}
