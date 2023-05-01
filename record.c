//WAP TO MAKE A RECORD OF 10 EMPLOYEES USING STRUCT DATA TYPE
#include <stdio.h>
struct employees{
int emp_num;
char name[50];
char address[50];
int dob;
int salary;
int years;
char level[50];
};

main()
{
  struct employees emp[2];
  int i;
  for(i=1;i<=2;i++)
  {
      printf("\nEnter the Employee number: ");
      scanf("%d", &emp[i].emp_num);
      printf("Enter the Name of the Employee: ");
      scanf("%s", &emp[i].name);
      printf("Enter the Address of the Employee: ");
      scanf("%s", &emp[i].address);
      printf("Enter the Date of Birth of the Employee: ");
      scanf("%d", &emp[i].dob);
      printf("Enter the Salary of the Employee: ");
      scanf("%d", &emp[i].salary);
      printf("Enter the Number of Years Employed of the Employee: ");
      scanf("%d", &emp[i].years);
      printf("Enter the Employee level of the Employee: ");
      scanf("%s", &emp[i].level);
  }
  for(i=1;i<=2;i++)
  {
      printf("\nEmployee number:%d\nName of the Employee:%s\nAddress of the Employee:%s\nDate of Birth of the Employee:%d\nSalary of the Employee:%d\nNumber of Years Employed of the Employee:%d\nEmployee level of the Employee:%s\n\n",emp[i].emp_num,emp[i].name,emp[i].address,emp[i].dob,emp[i].salary,emp[i].years,emp[i].level);

  }
}
