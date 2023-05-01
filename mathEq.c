#include <stdio.h>
#include <math.h>

int main() {
    float x, y, result;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    result = 5 * x * sqrt(pow(y,2)+5);
    printf("Result = %f", result);
    return 0;
}
