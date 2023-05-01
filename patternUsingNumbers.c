/*
1 0 1 0 1
  0 1 0 1
    1 0 1
      0 1
        1
*/

#include <stdio.h>

int main() {
    int n = 5;

    // Loop for rows
    for(int i = 1; i <= n; i++) {

        // Loop for printing spaces
        for(int j = 1; j < i; j++) {
            printf(" ");
        }

        // Loop for printing numbers
        for(int k = i; k <= n; k++) {
            printf("%d ", k % 2);
        }

        printf("\n");
    }

    return 0;
}
