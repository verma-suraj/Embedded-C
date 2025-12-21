#include <stdio.h>

int main()
{
    int *p;

    // printf("%d\n", *p);  // Dangerous: undefined behavior

    printf("Pointer declared but not initialized\n");

    return 0;
}
 