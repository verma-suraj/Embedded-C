#include <stdio.h>

int main()
{
    int a = 0;
    int b = 5;

    if (a || b)
        printf("Logical OR is TRUE\n");

    if (a | b)
        printf("Bitwise OR is NON-ZERO\n");

    return 0;
}