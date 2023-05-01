#include<stdio.h>

int main()
{
    int num;
    float temp; //temperature
    char symbol;

    printf("Enter your contact number : \n");
    scanf("%d",&num);

    printf("What is today's Temperature?\n");
    scanf("%f",&temp);

    printf("Do you want to exit? y/n\n");       //buffer problem (char aauda input liyena....will be solved later)
    scanf("%c",&symbol);

    printf("\nYour contact number is %d", num);
    printf("\nToday's Temperature is %.3f", temp);
    printf("\nYou have pressed %c, Thank you!", symbol);

    return 0;
}
