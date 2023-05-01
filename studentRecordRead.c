#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;
};

main()
{
    FILE *ptr;
    ptr = fopen("StudentRecord.txt", "r");
    if(ptr == NULL){
        printf("Error in File Location");
        exit(0);
    }
    struct student std[32];
    int i;
    printf("The Records of Student is \n");

    for(i=0;i<3;i++){
        fread(&std[i], sizeof(struct student), 1, ptr);
        printf("Roll no: %d \tName of the Student: %s \tMarks: %.2f\n", std[i].roll, std[i].name, std[i].marks);
    }
}
