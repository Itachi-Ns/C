//WAP to display sum of natural number using function

#include<stdio.h>

int add(int);
main()
{
    int a,total;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &a);
    total=add(a);
    printf("The sum is %d.", total);
}

int add(int a)
{
    int i, sum=0;
    for(i=1;i<=a;i++){
        sum+=i;
    }
    return sum;
}
