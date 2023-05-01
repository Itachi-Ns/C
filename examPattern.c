#include<stdio.h>

int main()
{
    int i,j,n=10;
    int A[]={'U','N','I','V','E','R','S','I','T','Y'};

    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%c", A[j]);
        }
        printf("\n");
    }
    return 0;
}
