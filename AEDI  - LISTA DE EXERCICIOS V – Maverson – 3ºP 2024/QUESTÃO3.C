#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0; // Caso base para n = 0
    } else if (n == 1) {
        return 1; // Caso base para n = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Chamada recursiva
    }
}

int main() {
    int n = 10; // Exemplo de entrada
    printf("O %d-�simo termo da sequ�ncia de Fibonacci �: %d\n", n, fibonacci(n));
    return 0;
}



