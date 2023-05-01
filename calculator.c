//Calculator
#include<stdio.h>

int add(int, int);

int main(void)
{
int x=add(5,9);
printf("The sum is %d.",x);
x=add(15,28);
printf("\nThe second sum is %d.",x);
x=sub(28,15);
printf("\nThe difference is %d.",x);
printf("\nThe difference of 54 and 24 is %d.",sub(54,24));
return 0;
}

int add(int a,int b)
{
int c;
c=a+b;
return c;
}

int sub(int a,int b)
{
int c;
if(a>b)
{
c=a-b;
}
else
{
c=b-a;
}
return c;
}
