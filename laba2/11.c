#include <stdio.h>
int main() {
    int n, k, m;
    printf("Введите число: ");
    scanf("%d", &n);

    for (k=0, m=1; m <= n; k++, m = m * 2);

    printf("Целая часть log2(%d) = %d\n", n, k-1);
    return 0;
}