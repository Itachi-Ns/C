/* WAP TO DISPLAY FOLLOWING PATTERN
      *
     ***
    *****
*/

#include<stdio.h>

int main()
{
    int row, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for(i=1; i<=row; i++){
        for(space=1; space<=row-i; space++){
             printf(" ");                       //To understand how this works put printf("+")
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}


/*

#include<stdio.h>

int main()
{
    int row, i, j, k, space;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    space=row;

    for(i=1; i<=row; i++){
        for(j=1; j<=space-1; j++){
             printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }

        space--;

        printf("\n");
    }

    return 0;
}

*/
