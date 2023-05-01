#include <stdio.h>

int main()
{
    int a, b, c;

    a=12;
    b=25;

    c=a;
    a=b;
    b=c;

    printf("the values of a and b are %d and %d\n", a, b);

    return 0;
}
