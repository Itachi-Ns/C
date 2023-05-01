#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the value of a = ");
    scanf("%d",&a);

    printf("Enter the value of b = ");
    scanf("%d",&b);

    printf("Enter the value of c = ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("\n%d is the greatest number",a);
    }
    else if(b>a && b>c){
        printf("\n%d is the greatest number",b);
    }
    else{
        printf("\n%d is the greatest number",c);
    }
    return 0;
}
