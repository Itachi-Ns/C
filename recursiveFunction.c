//Recursive Function
#include<stdio.h>

int sum(int n){
    int i,s=0;
    for(i=1;i<=n;i++){
        s += i;
}
return s;
}
main()
{
    int num;
    printf("Enter a number to calculate natural number: \n");
    scanf("%d",&num);
    printf("The sum of natural number is %d", sum(num));
}
