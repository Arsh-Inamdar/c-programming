#include <stdio.h>

int main(void)
{
    int n, remainder, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}
