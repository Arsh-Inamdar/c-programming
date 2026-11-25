#include <stdio.h>

int calculateGCD(int first, int second);

int main(void)
{
    int first;
    int second;

    printf("Enter two non-negative integers: ");
    scanf("%d %d", &first, &second);

    if (first < 0 || second < 0 || (first == 0 && second == 0))
    {
        printf("Enter valid non-negative integers, not both zero.\n");
    }
    else
    {
        printf("GCD = %d\n", calculateGCD(first, second));
    }

    return 0;
}

int calculateGCD(int first, int second)
{
    if (second == 0)
    {
        return first;
    }

    return calculateGCD(second, first % second);
}
