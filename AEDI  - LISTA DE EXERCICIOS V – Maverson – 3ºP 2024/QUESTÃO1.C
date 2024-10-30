#include <stdio.h>

int somaRecursiva(int n) {
    if (n == 1) {
        return 1;
    }
    return n + somaRecursiva(n - 1);
}

int main() {
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 1) {
        printf("Insira um numero positivo.\n");
    } else {
        printf("A soma de 1 ate %d e: %d\n", numero, somaRecursiva(numero));
    }

    return 0;
}
