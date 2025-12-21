#include <stdio.h>

int main()
{
    int a = 0;
    int b = 10;

    if (a != 0 && b / a > 1)
        printf("This will not execute\n");

    printf("Program continues safely\n");

    return 0;
}
