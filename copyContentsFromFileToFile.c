//c program to copy contents of student.txt to info.txt
#include<stdio.h>
int main()
{
    char c;
    FILE*ptr,*destination;
    ptr=fopen("student.txt","w");
    if(ptr==NULL)
    {
        printf("Error in FILE location!");
        return 1;
    }
    fprintf(ptr,"WELCOME");
    fclose(ptr);
    ptr = fopen("student.txt", "r");
    if (ptr == NULL)
    {
        printf("Error in opening file!");
        return 1;
    }
    destination=fopen("info.txt","w");
    if(destination==NULL)
    {
        printf("Error in destination file location.");
        fclose(ptr);
        return 1;
    }
    while((c=fgetc(ptr))!=EOF)
    {
        fputc(c,destination);
    }
    fclose(ptr);
    fclose(destination);
    printf("File copied successfully.");
    return 0;
}
