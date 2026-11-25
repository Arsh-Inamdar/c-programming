#include <stdio.h>

int main(void)
{
    int choice, a, b;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3)
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
        }

        switch (choice)
        {
            case 1:
                printf("Result = %d\n", a + b);
                break;

            case 2:
                printf("Result = %d\n", a - b);
                break;

            case 3:
                printf("Result = %d\n", a * b);
                break;

            case 4:
                printf("Exiting menu.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
