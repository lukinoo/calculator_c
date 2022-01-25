#include <stdio.h>

int main()
{
    int num1, num2;
    int result;
    char op;

    printf("Enter first Number: ");
    scanf("%d", &num1);

    printf("Enter second Number: ");
    scanf("%d", &num2);

    printf("Choose operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %d", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %d", result);
        break;
    case '*':
        result = num1 * num2;
        printf("%d", result);
        break;
    case '/':
        result = num1 / num2;
        printf("Result: %d", result);
        break;
    default:
        printf("Error!");
        break;
    }

    return 0;
}