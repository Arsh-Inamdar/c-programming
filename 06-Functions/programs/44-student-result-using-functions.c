#include <stdio.h>

float calculateTotal(float marks[], int subjects);
float calculatePercentage(float total, int subjects);
void displayResult(float percentage);

int main(void)
{
    float marks[5];
    float total;
    float percentage;
    int i;

    printf("Enter marks for 5 subjects (out of 100):\n");

    for (i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks. Enter values between 0 and 100.\n");
            return 1;
        }
    }

    total = calculateTotal(marks, 5);
    percentage = calculatePercentage(total, 5);

    printf("\nTotal Marks = %.2f / 500\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    displayResult(percentage);

    return 0;
}

float calculateTotal(float marks[], int subjects)
{
    float total = 0;
    int i;

    for (i = 0; i < subjects; i++)
    {
        total += marks[i];
    }

    return total;
}

float calculatePercentage(float total, int subjects)
{
    return total / subjects;
}

void displayResult(float percentage)
{
    if (percentage >= 75)
    {
        printf("Result: Distinction\n");
    }
    else if (percentage >= 60)
    {
        printf("Result: First Class\n");
    }
    else if (percentage >= 40)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }
}
