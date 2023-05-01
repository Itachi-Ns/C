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

    float per = total/5;
    printf("Your grades are %f:", per);

    if(per>=90.00 && per<100.00)
    {
        printf("Your grade is A+");
    }
    else if(per>=80.00 && per<90.00)
    {
        printf("Your grade is A");
    }
    else if(per>=70.00 && per<80.00)
    {
        printf("Your grade is B+");
    }
    else if(per>=60.00 && per<70.00)
    {
        printf("Your grade is B");
    }
    else if(per>=50.00 && per<60.00)
    {
        printf("Your grade is C+");
    }
    else if(per>=40.00 && per<50.00)
    {
        printf("Your grade is C");
    }
    else
    {
        printf("Your grade is F");
    }

    return 0;
}
