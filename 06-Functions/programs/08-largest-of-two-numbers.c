#include <stdio.h>

int findLargest(int first, int second);

int main(void)
{
    int first;
    int second;

    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);

    printf("Largest = %d\n", findLargest(first, second));

    return 0;
}

int findLargest(int first, int second)
{
    return first > second ? first : second;
}
