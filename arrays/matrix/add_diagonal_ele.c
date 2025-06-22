// Program to input a square matrix and find the sum of its diagonal elements
// Example: For 3x3 matrix → sum = a[0][0] + a[1][1] + a[2][2] 

#include<stdio.h>

int main() {
    int r, c;
    printf("Enter the size of rows and columns: ");
    scanf("%d%d", &r, &c);

    if (r != c) {
        printf("Diagonal sum is only valid for square matrices.\n");
        return 0;
    }

    int a[r][c], i, j;
    printf("Enter %dx%d elements for the matrix:\n", r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j <c; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Array elements are:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    int sum = 0;
    for (i = 0; i < r; i++)
        sum += a[i][i];

    printf("The sum of diagonal elements is: %d\n", sum);
    return 0;
}
