//WAP to calculate two values as addition, subtraction using function.

#include<stdio.h>
#include<conio.h>

int add(int,int);
int sub(int,int);
main()
{
    int a,b,s;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    s=add(a,b);
    printf("The sum is %d.\n",s);
    s=sub(a,b);
    printf("The diff is %d.", s);

}
int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return b-a;
}
