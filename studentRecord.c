//Storing Record of Students in a File
#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;
};

main()
{
    FILE *ptr;
    ptr = fopen("StudentRecord.txt", "w");
    if(ptr == NULL){
        printf("Error in File Location");
        exit(0);
    }
    struct student std[32];
    int i;
    printf("You can enter the Record of the Students\n\n");
    for(i=0;i<3;i++){
        printf("Enter Roll Number\n");
        scanf("%d", &std[i].roll);
        fflush(stdin);
        printf("Enter the Name of the Student\n");
        gets(std[i].name);
        printf("Enter the Total Marks\n");
        scanf("%f", &std[i].marks);
        fwrite(&std[i], sizeof(struct student), 1, ptr);
    }
}
