#include <stdio.h>

int main() {
    int sum = 0;
    int num;
    for (int i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("Sum = %d\n", sum);
    printf("Average = %f\n",(float) sum / 10);
    
}
