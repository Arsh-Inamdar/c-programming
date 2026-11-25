#include <stdio.h>

double add(double first, double second);
double subtract(double first, double second);
double multiply(double first, double second);
double divide(double first, double second);

int main(void)
{
    double first;
    double second;
    int choice;

    printf("Menu-Driven Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &first, &second);

    switch (choice)
    {
        case 1:
            printf("Result = %.2f\n", add(first, second));
            break;

        case 2:
            printf("Result = %.2f\n", subtract(first, second));
            break;

        case 3:
            printf("Result = %.2f\n", multiply(first, second));
            break;

        case 4:
            if (second == 0)
            {
                printf("Division by zero is not allowed.\n");
            }
            else
            {
                printf("Result = %.2f\n", divide(first, second));
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

double add(double first, double second)
{
    return first + second;
}

double subtract(double first, double second)
{
    return first - second;
}

double multiply(double first, double second)
{
    return first * second;
}

double divide(double first, double second)
{
    return first / second;
}
