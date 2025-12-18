#include <stdio.h>

int main() {
    unsigned int a, k, r, m;
    printf("Введите число a: ");
    scanf("%u", &a);
    printf("Введите количество позиций k: ");
    scanf("%u", &k);
    r = a << k;
    m = (1 << k) - 1;
    r = r | m;
    printf("Результат: %u\n", r);
    return 0;
}
