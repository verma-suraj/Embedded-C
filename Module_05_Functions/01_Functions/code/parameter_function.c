#include <stdio.h>

int square(int x)
{
    return (x * x);
}

int main()
{
    int value = 5;

    printf("Square = %d\n", square(value));

    return 0;
}
