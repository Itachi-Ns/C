#include <stdio.h>

// function to add two matrices
void sum(int m, int n, int matrix1[m][n], int matrix2[m][n], int result[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int m, n, i, j; // dimensions of matrices
    printf("Enter dimensions of matrices: ");
    scanf("%d %d", &m, &n);

    int matrix1[m][n], matrix2[m][n], result[m][n]; // initialize matrices

    // get input for matrix1 and matrix2
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // add matrices using the function
    sum(m, n, matrix1, matrix2, result);

    // print the result matrix
    printf("Resultant matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
