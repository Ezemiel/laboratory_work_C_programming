#include <stdio.h>
int main() {
    int a, n, s, k;
    printf("Введите число: ");
    scanf("%d", &a);

    for (n=a, s=0; n!=0; n=n/10) {
        k=n%10;
        s=s+k;
    }

    printf("Сумма цифр числа = %d\n", s);
    return 0;
}