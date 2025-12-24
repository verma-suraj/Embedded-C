#include <stdio.h>

extern int g_count;   // declaration

int main()
{
    g_count = 50;
    printf("Modified g_count = %d\n", g_count);

    return 0;
}
