//Q29.WAP to sub 2 matrices .
#include <stdio.h>

void subtractMatrices(int a[2][2], int b[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            result[i][j] = a[i][j] - b[i][j];
}
int main() {
    int A[2][2] = {{9, 8}, {7, 6}};
    int B[2][2] = {{5, 4}, {3, 2}};
    int C[2][2];

    subtractMatrices(A, B, C);
    printf("Difference of matrices:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
