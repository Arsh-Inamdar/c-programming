#include <stdio.h>

void countCalls(void);

int main(void)
{
    countCalls();
    countCalls();
    countCalls();

    return 0;
}

void countCalls(void)
{
    static int count = 0;

    count++;

    printf("Function called %d times.\n", count);
}
