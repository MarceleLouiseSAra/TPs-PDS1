#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void alocarVetor(int **vetor, int tamanho) {
    *vetor = (int *) calloc(tamanho, sizeof(int));
}

void preencherVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int aux = 0;
        scanf("%d", &aux);
        vetor[i] = aux;
        // vetor[i] = i;
    }
}

void imprimirVetor(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void bromerosort(int *vetor, int passo) {

    printf("entrei no bromerosort\n");
    printf("passo: %d\n", passo);
    // printf("vetor[0]: %d\n", vetor[0]);
    // printf("vetor[1]: %d\n", vetor[1]);
    
    // printf("(vetor+2): %p\n", (vetor+2));
    // printf("passo: %d\n", passo);

    if (passo == 1) {
        printf("passo = 1\n");
        return;

    } else {
        int maior = 0, menor = 0;
        maior = vetor[0] > vetor[1] ? vetor[0] : vetor[1];
        menor = vetor[0] < vetor[1] ? vetor[0] : vetor[1];
        // printf("maior: %d\nmenor: %d \n", maior, menor);
        vetor[0] = maior;
        vetor[1] = menor;
    }

    if (passo != 0) {

        printf("chamei o bromerosort recursivamente\n");
        bromerosort((vetor+2), (passo-2));

    } else if (!(passo == 0)) {

        printf("Ocorreu um erro inesperado.\n");
        printf("passo: %d\n", passo);
    }
}

void ritacao() {

}

int main () {

    int *ptr = NULL;
    int tamanho = 0;

    scanf("%d", &tamanho);
    alocarVetor(&ptr, tamanho);

    imprimirVetor(ptr, tamanho);    
    preencherVetor(ptr, tamanho);
    imprimirVetor(ptr, tamanho);

    bromerosort(ptr, tamanho);

    imprimirVetor(ptr, tamanho);

    free(ptr);

    return 0;
}