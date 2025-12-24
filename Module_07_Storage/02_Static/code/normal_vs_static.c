#include <stdio.h>

void demo(void)
{
    int normal = 0;
    static int stat = 0;

    normal++;
    stat++;

    printf("Normal = %d, Static = %d\n", normal, stat);
}

int main()
{
    demo();
    demo();
    demo();

    return 0;
}
