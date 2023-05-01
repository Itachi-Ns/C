#include <stdio.h>

// function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// function to calculate the sum of the series
float sumSeries(int n, float x) {
    float sum = 1.0; // initialize sum to first term of the series
    int i;
    for (i = 1; i <= n; i++) {
        sum += (float)pow(x, i) / factorial(i);
    }
    return sum;
}

// main function
int main() {
    int n;
    float x;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Sum of series = %f", sumSeries(n, x));
    return 0;
}
