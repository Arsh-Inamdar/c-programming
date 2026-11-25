#include <stdio.h>

int main(void)
{
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a number (0 to 20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Enter a number between 0 and 20.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}
