#include <stdio.h>

int main() {
    int n, i, j, k;
    double a[3][3], b[3], det, det_temp, x[3];
    double temp[3][3];
    
    printf("Введите размер системы (2 или 3): ");
    scanf("%d", &n);
    
    if (n < 2 || n > 3) {
        printf("Ошибка! Только 2 или 3\n");
        return 1;
    }
    
    printf("Введите коэффициенты матрицы A:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            scanf("%lf", &a[i][j]);
        }
    }
    
    printf("Введите правую часть (вектор) b:\n");
    for (i=0; i<n; i++) {
        scanf("%lf", &b[i]);
    }
    
    // тут всё как в 1 лабе
    if (n == 2) {
        det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    } else {
        det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
            - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
            + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
    }
    
    if (det == 0) {
        printf("Нет единственного решения\n");
        return 0;
    }
    
    // метод Крамера  тут
    for (k=0; k<n; k++) {
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                if (j == k) {
                    temp[i][j] = b[i];
                } else {
                    temp[i][j] = a[i][j];
                }
            }
        }
        
        if (n == 2) {
            det_temp = temp[0][0]*temp[1][1] - temp[0][1]*temp[1][0];
        } else {
            det_temp = temp[0][0]*(temp[1][1]*temp[2][2] - temp[1][2]*temp[2][1])
                     - temp[0][1]*(temp[1][0]*temp[2][2] - temp[1][2]*temp[2][0])
                     + temp[0][2]*(temp[1][0]*temp[2][1] - temp[1][1]*temp[2][0]);
        }
        
        x[k] = det_temp / det;
    }
    
    printf("Решение:\n");
    for (i=0; i<n; i++) {
        printf("x%d = %.2lf\n", i+1, x[i]);
    }
    
    return 0;
}
