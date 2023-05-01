#include<stdio.h>
main()
{
    char str[]="Today is a beautiful day";

    int i, count=0;

    for(i=0;str[i] != '\0';i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("The number of blank space is %d",count);
}
