#include<stdio.h>

main()
{
    int a,b,c,d;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    c = a + b;
    printf("\nThe sum of the given two values is : %d\n", c);

    c = a - b;
    printf("The difference of the given two values is : %d\n", c);

    c = a * b;
    printf("The product of the given two values is : %d\n", c);

    c = a / b;
    printf("The division of the given two values is : %d\n", c);

    c = a % b;
    printf("The modulus of the given two values is : %d\n\n", c);

    a += b; // a=a+b
    printf("The sum of the given two values is : %d\n", a);

    a -= b; // a=a-b
    printf("The difference of the given two values is : %d\n", a);

    a *= b; // a=a*b
    printf("The multiplication of the given two values is : %d\n\n", a);

    printf("Enter the value of d : ");
    scanf("%d", &d);

    d++; // d=d+1
    printf("Value of d after adding 1 : %d\n", d);

    d--; // d=d-1
    printf("Value of d after subtracting 1 : %d\n", d);
}
