#include <stdio.h>

int main()
{
    float total;
    printf("Enter the total marks of student: \n");
    scanf("%f", &total);

    if (total>200)
    {
        printf("The student has passed.");
    }
    else{
        printf("The student has failed.");
    }

    return 0;
}
