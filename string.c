#include<stdio.h>
#include<conio.h>

main()
{
    char name[25];

    printf("Enter your name\n");

    /*
    scanf("%s", name);
    printf("Your name is %s", name);
    */

    gets(name);
    printf("Your name is ");
    puts(name);
}
