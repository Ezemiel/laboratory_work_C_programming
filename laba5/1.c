#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    printf("Введите количество комплексных чисел: ");
    scanf("%d", &N);
    
    int signal[6] = {-1234, -3000, 1000, 1000, -3, -1};

    
    for (int i = 0; i < N; i++) {
        printf("s[%d] = %d.0 + j*(%d.0)\n", i, signal[2*i], signal[2*i+1]);
    }
    
    double energy = 0;
    for (int i = 0; i < N; i++) {
        energy += signal[2*i] * signal[2*i] + signal[2*i+1] * signal[2*i+1];
    }
    
    printf("Энергия сигнала = %lld\n", energy);
    
    int max_real = signal[0];
    for (int i = 0; i < N; i++) {
        if (signal[2*i] > max_real) {
            max_real = signal[2*i];
        }
    }
    
    printf("Максимальный элемент реальной части = %d\n", max_real);
    
    return 0;
}