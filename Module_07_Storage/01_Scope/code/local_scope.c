#include <stdio.h>

void test(void)
{
    int a = 10;   // local variable
    printf("Inside test: a = %d\n", a);
}

int main()
{
    test();

    // printf("%d", a); // ERROR: a not visible here
    return 0;
}
