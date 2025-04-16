#include <stdio.h>

void inputMatrix(int size, int matrix[size][size], const char* name) {
    printf("Enter elements of matrix %s (%dx%d):\n", name, size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int size, int matrix[size][size], const char* name) {
    printf("\nMatrix %s:\n", name);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int size, int mat1[size][size], int mat2[size][size], int result[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int size, int mat1[size][size], int mat2[size][size], int result[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrices(int size, int mat1[size][size], int mat2[size][size], int result[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = 0;
            for (int k = 0; k < size; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int mat1[size][size], mat2[size][size], sum[size][size], difference[size][size], product[size][size];
    inputMatrix(size, mat1, "A");
    inputMatrix(size, mat2, "B");

    addMatrices(size, mat1, mat2, sum);
    subtractMatrices(size, mat1, mat2, difference);
    multiplyMatrices(size, mat1, mat2, product);

    displayMatrix(size, mat1, "A");
    displayMatrix(size, mat2, "B");
    displayMatrix(size, sum, "Sum (A + B)");
    displayMatrix(size, difference, "Difference (A - B)");
    displayMatrix(size, product, "Product (A * B)");

    return 0;
}
