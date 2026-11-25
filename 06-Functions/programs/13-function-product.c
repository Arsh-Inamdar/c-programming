#include <stdio.h>

int calculateProduct(int first, int second);

int main(void)
{
    int first;
    int second;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    printf("Product = %d\n", calculateProduct(first, second));

    return 0;
}

int calculateProduct(int first, int second)
{
    return first * second;
}
