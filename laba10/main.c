#include "triangle.h"

int main() {
    double a, b, c;
    
    printf("Треугольник 1 (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    struct Triangle t1 = create_triangle(a, b, c);
    
    printf("Треугольник 2 (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    struct Triangle t2 = create_triangle(a, b, c);
    
    printf("Треугольник 3 (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    struct Triangle t3 = create_triangle(a, b, c);
    
    double s1 = area(t1);
    double s2 = area(t2);
    double s3 = area(t3);
    
    printf("\nПлощади: %.2f, %.2f, %.2f\n", s1, s2, s3);
    
    if (s1 >= s2 && s1 >= s3)
        printf("Наибольшая площадь у треугольника 1\n");
    else if (s2 >= s1 && s2 >= s3)
        printf("Наибольшая площадь у треугольника 2\n");
    else
        printf("Наибольшая площадь у треугольника 3\n");
    
    return 0;
}
