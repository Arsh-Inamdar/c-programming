#include <stdio.h>

int findLargest(int first, int second, int third);

int main(void)
{
    int first;
    int second;
    int third;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &first, &second, &third);

    printf("Largest = %d\n", findLargest(first, second, third));

    return 0;
}

int findLargest(int first, int second, int third)
{
    int largest = first;

    if (second > largest)
    {
        largest = second;
    }

    if (third > largest)
    {
        largest = third;
    }

    return largest;
}
