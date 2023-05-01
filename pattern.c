/* WAP TO DISPLAY FOLLOWING PATTERN
    *
    **
    ***
    ****
    *****
*/

#include<stdio.h>

int main()
{
    int row, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for(i=1; i<=row; i++){                // row
        for(j=1; j<=i; j++){            // column
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
