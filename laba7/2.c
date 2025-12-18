#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit2, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua34.";
    int sum = 0;
    int has_digits = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';
            has_digits = 1;
        }
    }
    
    if (has_digits) {
        printf("В предложении есть цифры\n");
        printf("Сумма цифр: %d\n", sum);
    } else {
        printf("В предложении нет цифр\n");
    }
    return 0;
}
