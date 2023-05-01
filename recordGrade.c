#include<stdio.h>
struct students{
char std_name[50];
int roll_no;
char std_add[50];
int eng;
int maths;
int science;
int total;
float avg;
char grade;
};

main()
{
    struct students std;



    printf("Enter the name of the student: ");
    scanf("%s", std.std_name);
    printf("Enter the roll number: ");
    scanf("%d", &std.roll_no);
    printf("Enter the address: ");
    scanf("%s", std.std_add);
    printf("Enter the obtained marks in English: ");
    scanf("%d", &std.eng);
    printf("Enter the obtained marks in Maths: ");
    scanf("%d", &std.maths);
    printf("Enter the obtained marks in Science: ");
    scanf("%d", &std.science);




    std.total = std.eng + std.maths + std.science;

    printf("%d\n",std.total );

    std.avg = std.total / 3;

     printf("%f\n",std.avg );
 if(std.avg>=90.0){std.grade='A';}
    else if(std.avg>=80.00 && std.avg<90.00){std.grade='A';}
    else if(std.avg>=70.00 && std.avg<80.00){std.grade='B';}
    else if(std.avg>=60.00 && std.avg<70.00){std.grade='B';}
    else if(std.avg>=50.00 && std.avg<60.00){std.grade='C';}
    else if(std.avg>=40.00 && std.avg<50.00){std.grade='C';}
    else{std.grade='F';}


    printf("\nStudent name: %s\nStudent Roll no: %d\nStudent Address: %s\nObtained marks in English: %d\nObtained marks in Maths: %d\nObtained marks in Science: %d\nObtained Total marks: %d\nObtained Grade: %c\n\n",std.std_name,std.roll_no,std.std_add,std.eng,std.maths,std.science,std.total,std.grade);




}
