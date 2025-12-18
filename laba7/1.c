#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    char result[1000];
    int spaces_removed = 0;
    int remove_zap = 0;
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            spaces_removed++;
        } else if (str[i] == ',') {
            remove_zap++;
        } else {
            result[j] = str[i];
            j++;
        }
        
    }
    result[j] = '\0';
    
    printf("Преобразованный текст: %s\n", result);
    printf("Число удаленных пробелов: %d\n", spaces_removed);
    printf("Число удаленных запятых:%d\n", remove_zap);
    return 0;
}