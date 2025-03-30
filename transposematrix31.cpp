//31: Transpose of a Matrix
#include <stdio.h>

void transposeMatrix(int matrix[2][2], int transpose[2][2]) {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            transpose[j][i] = matrix[i][j];
}

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int T[2][2];

    transposeMatrix(A, T);
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", T[i][j]);
        printf("\n");
    }

    return 0;
}
