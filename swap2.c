#include <stdio.h>

int main()
{
    int a, b;

    a = 12;
    b = 25;

    a = a+b;
    b = a-b;
    a = a-b;

    printf("The values of a and b are %d and %d\n", a, b);

    return 0;
}
