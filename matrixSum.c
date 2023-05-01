#include<stdio.h>
main()
{
    int M,N,i,j;
    printf("Enter the values for rows and column of the matrices: ");
    scanf("%d %d",&M,&N);
    int a[M][N],b[M][N],sum[M][N];
    printf("Enter the value for the first matrix: \n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("Enter the value for %d%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values for the second matrix: \n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("Enter the value for %d%d: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The sum of the matrices is: \n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",sum[i][j]);
            if(j==N-1)
            {
                printf("\n");
            }
        }
    }
}
