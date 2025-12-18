#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    printf("Введите координаты точки (x y): ");
    scanf("%f %f", &x, &y);
    
    if ((x*x + y*y <= 1) && (y >= x) && (y >= -x)) {
        printf("Да\n");
    } else {
        printf("Нет\n");
    }
}