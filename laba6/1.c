#include <stdio.h>
#define MAX 3
int main() {
    int n, i, j, mat[MAX][MAX], det;
    printf("Введите размер матрицы (1-3): ");
    scanf("%d", &n);

    if (n < 1 || n > 3) {
        printf("Ошибка! Только от 1 до 3\n");
        return 1;
    }

    printf("Введите элементы:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Матрица:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    if (n == 1) {
        det = mat[0][0];
    } else if (n == 2) {
        det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
    } else {
        det = mat[0][0]*(mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1])
            - mat[0][1]*(mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0])
            + mat[0][2]*(mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);
    }

    printf("Определитель: %d\n", det);
    return 0;
}