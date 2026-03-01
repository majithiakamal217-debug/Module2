#include <stdio.h>

int main() {
    int num, i, isPrime;
    
    printf("Number enter karo: ");
    scanf("%d", &num);
    
    isPrime = 1;
    if(num <= 1)
        isPrime = 0;
    else {
        for(i=2; i*i<=num; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    if(isPrime)
        printf("%d prime number hai\n", num);
    else
        printf("%d prime number nahi hai\n", num);
    
    printf("\n1 se %d tak primes:\n", num);
    for(int n=2; n<=num; n++) {
        int prime = 1;
        for(i=2; i*i<=n; i++) {
            if(n % i == 0) {
                prime = 0;
                break;
            }
        }
        if(prime)
            printf("%d ", n);
    }
    printf("\n");
    
    return 0;
}
