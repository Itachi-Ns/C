//WAP to accept 100 numbers from user and store them in odd.txt if number is odd or even.txt if number is even and then display odd numbers reading from odd.txt file

#include<stdio.h>
main()
{
    FILE*ptr;
    FILE*ptr_1;
    ptr=fopen("odd.txt","w");
    ptr_1=fopen("even.txt","w");
    if(ptr==NULL || ptr_1==NULL)
    {
        printf("Error in FILE location!");
    }
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            fprintf(ptr_1,"%d\n",i);
        }
        else
        {
            fprintf(ptr,"%d\n",i);
        }
    }
}
