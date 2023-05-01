//WAP to fine prime number using functions
#include <stdio.h>

int prime(int);

main()
{
    int n, result;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    result = prime(n);
    if(result==1)
        printf("The number is a prime number.");
    else
        printf("The number is not a prime number.");
}
int prime(int a)
{
    int b;
    for(b=2;b<=a-1;b++)
    {
        if(a%b==0)
            return 0;
    }
    return 1;
}
