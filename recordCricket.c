#include<stdio.h>
struct cricketers
{
    char name[20];
    int runs;
    int wickets;
};
sort_wickets(struct cricketers *crick)
{
    int i,j;
    int temp;
    for(i=0;i<3-1;i++)
    {
        for(j=0;j<3-i-1;j++)
        {
            if(crick[j].wickets<crick[j+1].wickets)
            {
                temp=crick[j].wickets;
                crick[j].wickets=crick[j+1].wickets;
                crick[j+1].wickets=temp;
            }
        }
    }
}

main()
{
    struct cricketers crick[10];
    int i;
    printf("Fill The Informations \n");
    for(i=0;i<3;i++)
    {
        printf("\nEnter name: ");
        scanf("%s",crick[i].name);
        printf("Enter runs: ");
        scanf("%d",&crick[i].runs);
        printf("Enter wickets taken: ");
        scanf("%d",&crick[i].wickets);
    }
    sort_wickets(crick);
    for(i=0;i<3;i++)
    {
    printf("\nName: %s\tRuns: %d\tWickets: %d\n",crick[i].name,crick[i].runs,crick[i].wickets);
    }
}
