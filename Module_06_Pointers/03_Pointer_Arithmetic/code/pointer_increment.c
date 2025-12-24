#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("p before increment = %p\n", p);
    p++;
    printf("p after increment  = %p\n", p);

    return 0;
}
