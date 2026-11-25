#include <stdio.h>

int main(void)
{
    int n, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    do
    {
        count++;
        n /= 10;
    } while (n != 0);

    printf("Number of digits = %d\n", count);

    return 0;
}
