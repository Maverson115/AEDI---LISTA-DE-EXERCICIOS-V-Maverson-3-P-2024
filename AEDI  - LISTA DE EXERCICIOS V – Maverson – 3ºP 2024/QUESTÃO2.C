#include <stdio.h>
#include <stdlib.h>

void gerarPA(int quantidade, int valor_inicial, int razao, int *array) {
    for (int i = 0; i < quantidade; i++) {
        array[i] = valor_inicial + i * razao;
    }
}

void imprimirArray(int *array, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int quantidade = 8;
    int valor_inicial = 5;
    int razao = 1;
    int *array = (int *)malloc(quantidade * sizeof(int));

    gerarPA(quantidade, valor_inicial, razao, array);
    imprimirArray(array, quantidade);

    free(array);
    return 0;
}
