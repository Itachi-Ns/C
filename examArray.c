#include <stdio.h>

int main() {
    int i, search, flag = 0;
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < 10; i++) {
        if (arr[i] == search) {
            printf("%d is found at position %d.\n", search, i + 1);
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%d is not found in the array.\n", search);
    }

    return 0;
}
