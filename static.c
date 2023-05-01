//Static Function
#include<stdio.h>

add()
{
    static int i=1;
    printf("The value of i is %d\n",i);
    i++;
}

main()
{
    add();
    add();
    add();
}
