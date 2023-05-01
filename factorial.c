#include <stdio.h>

int main()
{
    int n, i, f;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        f *= i;
    }

    printf("Factorial is %d", n, f);

    return 0;
}
