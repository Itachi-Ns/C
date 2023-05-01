#include<stdio.h>

int main()
{
    int num[100], n, i, j, temp;
    printf("Enter a number for an Array\n");
    scanf("%d", &n);

    printf("Enter Array Values\n");
    for(i=0;i<n;i++){
        printf("Value for %d ", i+1);
        scanf("%d", &num[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(num[i]>num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("\nThe Sorted Array Value is \n");

    for(i=0;i<n;i++){
        printf("%d, ", num[i]);
    }

    return 0;
}
