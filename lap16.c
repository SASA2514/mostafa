#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int and(int a, int b)
{
    return a & b;
}

int or(int a, int b)
{
    return a | b;
}

int not(int a) {
    return ~a;
}

int xor(int a, int b)
{
    return a ^ b;
}

int reminder(int a, int b)
{
    return a % b;
}

int increment(int a)
{
    return ++a;
}

int decrement(int a)
{
    return --a;
}

int main()
 {
    int operation_id, operand1, operand2, result;

    printf("Enter the operation ID: ");
    scanf("%d", &operation_id);

    switch (operation_id) {
        case 1:
            printf("Enter two operands: ");
            scanf("%d %d", &operand1, &operand2);
            result = add(operand1, operand2);
            break;
        case 2:
            printf("Enter two operands: ");
            scanf("%d %d", &operand1, &operand2);
            result = subtract(operand1, operand2);
            break;
        case 3:
            printf("Enter two operands: ");
            scanf("%d %d", &operand1, &operand2);
            result = multiply(operand1, operand2);
            break;
        case 4:
            printf("Enter two operands: ");
            scanf("%d %d", &operand1, &operand2);
            result = divide(operand1, operand2);
            break;
        case 5:
            printf("Enter two operands: ");
            scanf("%d %d", &operand1, &operand2);
            result = and(operand1, operand2);
            break;
        case 6:
            printf("Enter two operands: ");
            scanf("%d %d", &operand1, &operand2);
            result = or(operand1, operand2);
            break;
        case 7:
            printf("Enter one operand: ");
            scanf("%d", &operand1);
            result = not(operand1);
            break;
        case 8:
            printf("Enter two operands: ");
            scanf("%d %d", &operand1, &operand2);
            result = xor(operand1, operand2);
            break;
        case 9:
            printf("Enter two operands: ");
            scanf("%d %d", &operand1, &operand2);
            result = reminder(operand1, operand2);
            break;
        case 10:
            printf("Enter one operand: ");
            scanf("%d", &operand1);
            result = increment(operand1);
            break;
        case 11:
            printf("Enter one operand: ");
            scanf("%d", &operand1);
            result = decrement(operand1);
            break;
        default:
          printf("Invalid operation ID\n");
          return -1; 
    }

    printf("Result: %d\n", result);

    return 0;
}
