#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;
    
    printf("Kitne numbers: ");
    scanf("%d", &n);
    
    float arr[n];
    
    printf("%d numbers enter karo:\n", n);
    for(i=0; i<n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    
    avg = sum / n;
    
    printf("\nSum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);
    
    return 0;
}
