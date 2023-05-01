#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int id;
    float salary;
};

main() {
    struct employee emp[2];
    int i, j;
    struct employee temp;

    // Input employee records
    for (i = 0; i < 2; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Sort employee records in descending order based on salary
    for (i = 0; i < 2; i++) {
        for (j = i+1; j < 2; j++) {
            if (emp[i].salary < emp[j].salary) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    // Display sorted employee records
    printf("\nEmployees sorted in descending order based on salary:\n");
    for (i = 0; i < 2; i++) {
        printf("Name: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].id);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("\n");
    }
}
