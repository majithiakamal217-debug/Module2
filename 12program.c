#include <stdio.h>

int main() {
    FILE *fp;
    char str[200];
    
    printf("Full sentence enter karo: ");
    fgets(str, 200, stdin);
    
    fp = fopen("file.txt", "w");
    if(fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    fprintf(fp, "%s", str);
    fclose(fp);
    printf("Written to file!\n\n");
    
    fp = fopen("file.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fgets(str, 200, fp);
    printf("Read from file: %s", str);
    fclose(fp);
    
    return 0;
}
