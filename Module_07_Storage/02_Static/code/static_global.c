#include <stdio.h>

static int g_data = 10;   // visible only in this file

void test(void)
{
    g_data++;
}

int main()
{
    test();
    printf("g_data = %d\n", g_data);

    return 0;
}
