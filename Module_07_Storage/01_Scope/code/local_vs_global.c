#include <stdio.h>

int value = 10;

void test(void)
{
    int value = 20;   // local overrides global
    printf("Inside test: value = %d\n", value);
}

int main()
{
    printf("In main: value = %d\n", value);
    test();

    return 0;
}
