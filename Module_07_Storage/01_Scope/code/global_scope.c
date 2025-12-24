#include <stdio.h>

int g_data = 100;   // global variable

void test(void)
{
    g_data = 200;
}

int main()
{
    printf("Before: g_data = %d\n", g_data);
    test();
    printf("After: g_data = %d\n", g_data);

    return 0;
}
