#include <stdio.h>
int main() {
    int m, n, i, j, temp;

    // Input matrix dimensions
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Reverse the rows of the matrix
    for (i = 0; i < m / 2; i++) {
        for (j = 0; j < n; j++) {
            // Swap the rows
            temp = matrix[i][j];
            matrix[i][j] = matrix[m - i - 1][j];
            matrix[m - i - 1][j] = temp;
        }
    }

    // Output the matrix with reversed rows
    printf("Matrix after reversing rows:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

		
	

