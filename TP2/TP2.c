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
    // printf("entrei no bromerosort\n");
    // printf("passo: %d\n", passo);
    // printf("vetor[0]: %d\nvetor[1]: %d\n", vetor[0], vetor[1]);
    
    // printf("(vetor+2): %p\n", (vetor+2));
    // printf("passo: %d\n", passo);

    if (passo == 1) {
        // printf("passo == 1\n");
        return;

    } else {
        int maior = 0, menor = 0;
        menor = vetor[0] < vetor[1] ? vetor[0] : vetor[1];
        maior = vetor[0] > vetor[1] ? vetor[0] : vetor[1];
        // printf("maior: %d\nmenor: %d \n", maior, menor);
        vetor[0] = menor;
        vetor[1] = maior;
    }

    if (passo != 0) {

        // printf("chamei o bromerosort recursivamente\n");
        bromerosort((vetor+2), (passo-2));

    } else if (!(passo == 0)) {

        printf("Ocorreu um erro inesperado.\n");
        printf("passo: %d\n", passo);
    }
}

void ritacao(int *vetor, int *vetorAuxiliar, int tamanho) {
    printf("entrei na ritacao\n");
    printf("tamanho: %d\n", tamanho);
    
    if (tamanho == 1 || tamanho == 0) {
        // printf("tamanho == 1 || tamanho == 0\n");
        return;
    } else {
        
        int k = 1, sobrou = 0;

        for (int i = 0, j = 0; k < 4; k++) {

            printf("i: %d\nj: %d\nk: %d\n", i, j, k);
            
            printf("vetor[i]: %d\nvetor[j+2]: %d\n", vetor[i], vetor[j+2]);
            
            int menor = 0;
            menor = vetor[i] < vetor[j+2] ? vetor[i] : vetor[j+2];
            sobrou = vetor[i] > vetor[j+2] ? vetor[i] : vetor[j+2];

            printf("menor: %d\n", menor);
            printf("sobrou: %d\n", sobrou);

            vetorAuxiliar[k-1] = menor;
            vetorAuxiliar[k] = sobrou;

            printf("vetorAuxiliar: \n");
            imprimirVetor(vetorAuxiliar, tamanho);

            if (vetor[i] == menor && i < 2) {
                i++;

                if (i == 2){
                    i = 1;
                    j++;
                }

            } else if (vetor[j+2] == menor && j < 2) {
                j++;

                if (j == 2){
                    j = 1;
                    i++;
                }
            } 

        }
    }

    if (tamanho != 0) {

        printf("chamei a ritacao recursivamente\n");
        ritacao((vetor+4), (vetorAuxiliar+4), (tamanho-4));

    } else if (!(tamanho == 0)) {

        printf("Ocorreu um erro inesperado.\n");
        printf("tamanho: %d\n", tamanho);
    }
}

int main () {

    int *vetor = NULL, *vetorAuxiliar = NULL;
    int tamanho = 0;

    printf("Forneça o tamanho dos vetores, um número inteiro positivo múltiplo de 4 (quatro):\n");
    scanf("%d", &tamanho);
    alocarVetor(&vetor, tamanho);
    printf("Vetor principal:\n");
    imprimirVetor(vetor, tamanho);    

    alocarVetor(&vetorAuxiliar, tamanho);
    printf("Vetor auxiliar:\n");
    imprimirVetor(vetor, tamanho); 

    printf("Forneça as %d entradas do vetor principal, que deseja-se ordenar:\n", tamanho);
    preencherVetor(vetor, tamanho);
    printf("Vetor principal:\n");
    imprimirVetor(vetor, tamanho);

    printf("Bromerosort:\n");
    bromerosort(vetor, tamanho);
    imprimirVetor(vetor, tamanho);

    printf("Ritação:\n");
    ritacao(vetor, vetorAuxiliar, tamanho);
    imprimirVetor(vetorAuxiliar, tamanho);

    free(vetor);
    free(vetorAuxiliar);

    return 0;
}