//Global Function
#include<stdio.h>
int x=5,y=6;
int add()
{
    int z;
    z=x+y;
    printf("the sum of z is %d.",z);
}
main()
{
    int c;
    c=x+y;
    printf("the sum of c is %d.",c);
    add();
}
