#include <stdio.h>

int maior(int a, int b, int c) {
    int maior = a; // Assume que 'a' é o maior inicialmente
    if (b > maior) {
        maior = b; // Atualiza se 'b' for maior
    }
    if (c > maior) {
        maior = c; // Atualiza se 'c' for maior
    }
    return maior; // Retorna o maior número
}

int main() {
    int num1 = 10, num2 = 20, num3 = 15;
    printf("O maior numero e: %d\n", maior(num1, num2, num3));
    return 0;
}
