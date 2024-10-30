#include <stdio.h>

int busca_binaria(int arr[], int esquerda, int direita, int alvo) {
    if (direita >= esquerda) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Verifica se o elemento está presente no meio
        if (arr[meio] == alvo) {
            return meio;
        }

        // Se o elemento for menor que o meio, ele só pode estar na parte esquerda
        if (arr[meio] > alvo) {
            return busca_binaria(arr, esquerda, meio - 1, alvo);
        }

        // Caso contrário, o elemento só pode estar na parte direita
        return busca_binaria(arr, meio + 1, direita, alvo);
    }

    // O elemento não foi encontrado
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int alvo = 10;
    int resultado = busca_binaria(arr, 0, n - 1, alvo);
    (resultado == -1) ? printf("Elemento não encontrado\n") : printf("Elemento encontrado no indice: %d\n", resultado);
    return 0;
}
