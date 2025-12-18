#include <stdio.h>
int main() {
    int n, m, i, j, mat[10][10];
    int zeroRow = -1, zeroCol = -1, zeroCount = 0;
    
    printf("Введите количество строк: ");
    scanf("%d", &n);
    printf("Введите количество столбцов: ");
    scanf("%d", &m);
    
    if (n < 1 || n > 10 || m < 1 || m > 10) {
        printf("Ошибка! Размер от 1 до %d\n", 10);
        return 1;
    }
    
    printf("Введите элементы:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("\nИсходная матрица:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
    
    // ищем первый ноль
    for (i = 0; i < n && zeroRow == -1; i++) {
        for (j = 0; j < m; j++) {
            if (mat[i][j] == 0) {
                zeroRow = i;
                zeroCol = j;
                break;
            }
        }
    }
    
    if (zeroRow != -1) {
        printf("\nПервый ноль: [%d][%d]\n", zeroRow, zeroCol);
        
        // размер квадрата
        int size = zeroCol + 1;
        if (size > zeroRow + 1) {
            size = zeroRow + 1;
        }
        
        if (size > 1) {
            int startRow = zeroRow - size + 1;
            int startCol = zeroCol - size + 1;
            
            printf("Транспонируем квадрат %dx%d\n", size, size);
            
            // транспонирование
            for (i = 0; i < size; i++) {
                for (j = i + 1; j < size; j++) {
                    int temp = mat[startRow + i][startCol + j];
                    mat[startRow + i][startCol + j] = mat[startRow + j][startCol + i];
                    mat[startRow + j][startCol + i] = temp;
                }
            }
            
            printf("\nПосле транспонирования:\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                    printf("%3d ", mat[i][j]);
                }
                printf("\n");
            }
        }
    } else {
        printf("\nНулей нет\n");
    }
    
    // считаем нули
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (mat[i][j] == 0) {
                zeroCount++;
            }
        }
    }
    
    printf("\nНулей: %d, строк: %d\n", zeroCount, n);
    
    if (zeroCount > n) {
        printf("Заменяем нули на %d\n", zeroCount);
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    mat[i][j] = zeroCount;
                }
            }
        }
    }
    
    printf("\nИтоговая матрица:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
