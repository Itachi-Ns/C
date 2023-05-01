#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);

main()
{
    int num1,num2,result;
    float m;
    char sym;
    printf("Enter first number and second number: \n");
    scanf("%d %d",&num1,&num2);
    fflush(stdin);
    printf("Enter + or - or * or /.\n");
    scanf("%c",&sym);
    switch(sym)
    {
    case '+':
        result=add(num1,num2);
        break;
    case '-':
        result=sub(num1,num2);
        break;
    case '*':
        result=mul(num1,num2);
        break;
    case '/':
        result=(int)div(num1,num2);
        break;
    default:
        printf("Wrong answer");
    }
    printf("The result is %d.",result);
}
    int add(int num1,int num2)
    {
        int result;
        result=num1+num2;
        return result;
    }
    int sub(int num1,int num2)
    {
        int result;
        if(num1>num2)
            {
                result=num1-num2;
            }
        else
            {
                result=num2-num1;
            }
        return result;
    }
    int mul(int num1,int num2)
    {
        int result;
        result=num1*num2;
        return result;
    }
    float div(int num1,int num2)
    {
        if(num1>num2)
        {
            return num1/num2;
        }
        else
        {
            return num2/num1;
        }
    }
