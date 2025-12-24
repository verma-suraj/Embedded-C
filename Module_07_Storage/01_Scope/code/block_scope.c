#include <stdio.h>

int main()
{
    if (1)
    {
        int x = 50;
        printf("Inside block: x = %d\n", x);
    }

    // printf("%d", x); // ERROR: out of scope
    return 0;
}