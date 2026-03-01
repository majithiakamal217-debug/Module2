#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[3];
    
    for(int i=0; i<3; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }
    
    printf("\n=== Student Records ===\n");
    printf("Name\t\tRoll No\tMarks\n");
    printf("--------------------------------\n");
    
    for(int i=0; i<3; i++) {
        printf("%s\t\t%d\t%.2f\n", 
               students[i].name, 
               students[i].roll_no, 
               students[i].marks);
    }
    
    return 0;
}
