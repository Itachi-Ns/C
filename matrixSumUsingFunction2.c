#include<stdio.h>
void sum(int x[][3],int y[][3]);
void main()
{
    int x[3][3],y[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the number for first matrix: ");
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the number for second matrix: ");
            scanf("%d",&y[i][j]);
        }
    }
    sum(x,y);
}

void sum(int x[][3],int y[][3])
{
    int sum[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=x[i][j]+y[i][j];
            printf("%5d",sum[i][j]);
        }
        printf("\n");
    }
}
