#include <stdio.h>
#include <math.h>

int main() {
    char mode, op;
    float a, b, num;

    printf("Enter mode (1 for Basic Arithmetic, 2 for Power/Root): ");
    scanf(" %c", &mode);

    switch (mode) {
        case '1':
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);

            printf("Enter operator (+, -, *, /): ");
            scanf(" %c", &op);

            switch (op) {
                case '+':
                    printf("Result = %.2f", a + b);
                    break;

                case '-':
                    printf("Result = %.2f", a - b);
                    break;

                case '*':
                    printf("Result = %.2f", a * b);
                    break;

                case '/':
                    printf("Result = %.2f", a / b);
                    break;

                default:
                    printf("Invalid operator");
            }
            break;

        case '2':
            printf("Enter a number: ");
            scanf("%f", &num);

            printf("Enter operation (s for square, r for square root): ");
            scanf(" %c", &op);

            switch (op) {
                case 's':
                    printf("Result = %.2f", num * num);
                    break;

                case 'r':
                    printf("Result = %.2f", sqrt(num));
                    break;

                default:
                    printf("Invalid operation");
            }
            break;

        default:
            printf("Invalid mode");
    }

    return 0;
}