#include <stdio.h>

int main()
{
    int a = 2;
    int b = 3;

    if (a && b)
        printf("Logical AND is TRUE\n");

    if (a & b)
        printf("Bitwise AND is NON-ZERO\n");

    return 0;
}
