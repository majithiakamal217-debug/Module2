#include <stdio.h>

int main() {
    int num;
    
    printf("Number enter karo: ");
    scanf("%d", &num);
    
    printf("\nResults:\n");
    
    if(num % 2 == 0)
        printf("%d even hai\n", num);
    else
        printf("%d odd hai\n", num);
    
    if(num > 0)
        printf("%d positive hai\n", num);
    else if(num < 0)
        printf("%d negative hai\n", num);
    else
        printf("Number zero hai\n");
    
    if(num % 3 == 0 && num % 5 == 0)
        printf("%d 3 aur 5 dono ka multiple hai\n", num);
    else
        printf("%d 3 aur 5 ka multiple nahi hai\n", num);
    
    return 0;
}
