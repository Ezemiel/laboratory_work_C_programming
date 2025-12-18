#include "triangle.h"

// Создает треугольник (возвращает структуру)
struct Triangle create_triangle(double a, double b, double c) {
    struct Triangle t;
    t.a = a;
    t.b = b;
    t.c = c;
    return t;
}

// Площадь по формуле Герона (принимает структуру)
double area(struct Triangle t) {
    double p = (t.a + t.b + t.c) / 2;
    return sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
}
