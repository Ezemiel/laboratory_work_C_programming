#define TRIANGLE_H

#include <stdio.h>
#include <math.h>

// Структура Треугольник
struct Triangle {
    double a, b, c;
};

// Прототипы функций
struct Triangle create_triangle(double a, double b, double c);
double area(struct Triangle t);
