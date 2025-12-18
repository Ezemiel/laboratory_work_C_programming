#include <stdio.h>

int main() {
    unsigned int a;
    printf("Введите число a: ");
    scanf("%u", &a);
    if ((a & 15) == 0) {
        printf("Число %u кратно 16\n", a);
    } else {
        printf("Число %u не кратно 16\n", a);
    }
}
