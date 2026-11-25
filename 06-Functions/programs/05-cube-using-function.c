#include <stdio.h>

int calculateCube(int number);

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Cube = %d\n", calculateCube(number));

    return 0;
}

int calculateCube(int number)
{
    return number * number * number;
}
