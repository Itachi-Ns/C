/* WAP TO DISPLAY FOLLOWING PATTERN
    *****
     ***
      *
*/

#include<stdio.h>

int main()
{
    int row, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for(i=1;i<=row;i++){
        for(space=1;space<=i-1;space++){
            printf(" ");
        }
        for(j=1;j<=row-i+1;j++){
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}
