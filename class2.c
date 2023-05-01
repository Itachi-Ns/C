#include <stdio.h>

main()
{
    int a,b,c;          //Declaration
    float x,y,z;        //Initialization

    a = 6;              //Definition
    b = 54;
    c = a + b;

    printf("Sum of a and b is %d\n", c);
    c = a - b;
    printf("Difference between a and b is %d\n", c);
    c = a * b;
    printf("Product of a and b is %d\n", c);
    c = b / a;
    printf("Division of b by a is %d\n\n", c); // when a < b, a/b is not possible

//<-------------------------ASSIGNMENT OPERATORS------------------------------->

    a += 8;
    printf("The value of a is %d\n", a);

    a -= 5;
    printf("The value of a is %d\n", a);

    a++;
    printf("The value of a is %d\n", a);

    printf("The size of a is %d\n", sizeof(a));
}
