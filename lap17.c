#include <stdio.h>

int main() {
    int num1, num2;
    while (1) {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("The sum of %d and %d is %d\n", num1, num2, num1 + num2);
    }
    return 0;
}
