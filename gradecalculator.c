#include <stdio.h>

int main() {
    float marks;
    
    printf("Student marks enter karo (0-100): ");
    scanf("%f", &marks);
    
    printf("\nGrade: ");
    
    if(marks > 90)
        printf("A");
    else if(marks > 75 && marks <= 90)
        printf("B");
    else if(marks > 50 && marks <= 75)
        printf("C");
    else if(marks <= 50)
        printf("D");
    else
        printf("Invalid marks!");
    
    printf(" (%.0f)\n", marks);
    
    return 0;
}
