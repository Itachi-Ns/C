#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    char add;
};

main() {
    struct student std[2];
    int i, j;

    // Input students records
    for (i = 0; i < 2; i++) {
        printf("Enter details of Students %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &std[i].id);
        printf("Name: ");
        scanf("%s", &std[i].name);
        printf("Address: ");
        scanf("%s", &std[i].add);
    }

    for (i = 0; i < 2; i++) {
        if(std[i].add = "Kathmandu"){
            count++;
        }
    }
    /* Sort employee records in descending order based on salary
    for (i = 0; i < 2; i++) {
        for (j = i+1; j < 2; j++) {
            if (emp[i].salary < emp[j].salary) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    } */

    // Display sorted employee records
    printf("\nEmployees sorted in descending order based on salary:\n");
    for (i = 0; i < 2; i++) {
        printf("ID: %d\n", std[i].id);
        printf("Name: %s\n", std[i].name);
        printf("Address: %s\n", std[i].add);
        printf("\n");
    }
}
