#include <stdio.h>
#define N 5
#define M 5
int main() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == 0 || i == N - 1) {
                printf("*");
            } else if (j == 0) {
                printf("*");
            } else if (j == M - 1) {
                printf("*");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
}    