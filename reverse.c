#include<stdio.h>           //Program to reverse a number

main()
{
    int num, rev, rem;
    printf("Enter an Integer value more than a single digit.\n");
    scanf("%d", &num);

    while(num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("The reverse number of %d is %d", num, rev);
}
