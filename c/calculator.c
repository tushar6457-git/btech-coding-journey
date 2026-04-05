#include <stdio.h>
int main() {
    double a, b, result;
    char op;

    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            result = a / b;
            break;
        default:
            printf("Error: Unknown operator '%c'\n", op);
            return 1;
    }

    printf("Result: %.2lf\n", result);
    return 0;
}