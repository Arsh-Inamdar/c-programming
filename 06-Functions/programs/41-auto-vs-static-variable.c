#include <stdio.h>

void compareVariables(void);

int main(void)
{
    compareVariables();
    compareVariables();
    compareVariables();

    return 0;
}

void compareVariables(void)
{
    auto int automaticNumber = 0;
    static int staticNumber = 0;

    automaticNumber++;
    staticNumber++;

    printf("Automatic variable: %d\n", automaticNumber);
    printf("Static variable: %d\n\n", staticNumber);
}
