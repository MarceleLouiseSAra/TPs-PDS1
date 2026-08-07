#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void inicializaMatriz(char matriz[10][10]) {

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = '0';
        }
    }
}

void imprimeMatriz(char matriz[10][10]) {

    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf(" %d  ", i);
    }

    printf("\n");

    printf("  -----------------------------------------\n");
    for (int i = 0; i < 10; i++) {
        printf("%d |", i);
        for (int j = 0; j < 10; j++) {
            printf(" %c |", matriz[i][j]);
        }
        printf("\n");
    }
    printf("  -----------------------------------------\n");
}

bool percorreToroide(char matriz[10][10], int T, char o, int x, int y) {

    if (o == 'v') {

        int i = 0, linha = x;
        while (i < T) {
            
            if (linha > 9) {
                linha = 0;
            }
            
            if (matriz[linha][y] != '0') {
                return false;
            } else {
                linha++;
                i++;
            }
        }

    } else if (o == 'h') {

        int i = 0, coluna = y;
        while (i < T) {

            if (coluna > 9) {
                coluna = 0;
            }

            if (matriz[x][coluna] != '0') {
                return false;
            } else {
                coluna++;
                i++;
            }
        }
        
    } else {
        printf("A orientação fornecida '%c' não é valida.\n", o);
    }

    return true; 
}

void posicionaNavios(char matriz[10][10], int T, char o, int x, int y, char simbolo) {
    if (o == 'v') {

        int i = 0, linha = x;
        while (i < T) {
            
            if (linha > 9) {
                linha = 0;
            }
            
            matriz[linha][y] = simbolo;
            linha++;
            i++;
        }

    } else if (o == 'h') {

        int i = 0, coluna = y;
        while (i < T) {

            if (coluna > 9) {
                coluna = 0;
            }

            matriz[x][coluna] = simbolo;
            coluna++;
            i++;
        }
        
    } else {
        printf("A orientação fornecida '%c' não é valida.\n", o);
    }
}

void ataque(char matriz[10][10], char tipoDeAtaque, int* combo) {
    if (tipoDeAtaque == 'e') {
        
        if (*combo >= 2) {
            char o = ' ', coordenada = ' ';
            printf("Ataque especial solicitado. Forneça uma orientação 'o' ('v' ou 'h'): \n");
            scanf("%c", &o);

            
            if (o == 'v') {
                printf("Forneça a linha em que deseja realizar o ataque especial: \n");
                scanf(" %c", &coordenada);

                for (int i = 0; i < 10; i++) {
                    matriz[coordenada][i] = '0';
                }

                *combo = 0;

            } else if (o = 'h') {
                printf("Forneça a coluna em que deseja realizar o ataque especial: \n");
                scanf(" %c", &coordenada);

                for (int i = 0; i < 10; i++) {
                    matriz[i][coordenada] = '0';
                }

                *combo = 0;

            } else {
                printf("A orientação fornecida '%c' não é valida.\n", o);
            }

        } else {
            printf("Ataque especial solicitado quando ainda não era permitido. Combo zerado!\n");
            *combo = 0;
        }

    } else if (tipoDeAtaque == 'n') {

        int x = 0, y = 0;

        printf("Forneça a linha e a coluna, respectivamente, em que deseja realizar o ataque: \n");
        scanf("%1d%1d", &x, &y);

        if (!percorreToroide(matriz, 1, 'v', x, y)) { // se retornar false, é porque encontrou um navio
            matriz[x][y] = '0';
            printf("Ataque normal bem-sucesso. Combo incrementado.\n");
            combo++;
        } else {
            printf("Nenhum navio encontrado na coordenada fornecida. Ataque normal mal-sucedido.\n");
        }


    } else {
        printf("O tipo de ataque fornecido '%c' não é valido.\n", tipoDeAtaque);
    }
}

int main () {

    char matriz[10][10];

    inicializaMatriz(matriz);

    imprimeMatriz(matriz);

    int i = 1, N = 0, M = 0, T = 0, x = 0, y = 0;
    char o = ' ';

    printf("Forneça o número N ∈ [1,20] de navios dos Algoritmistas: \n");
    scanf("%d", &N);
    while (N > 0) {
        printf("Forneça o tamanho 'T' ∈ [1,5] do navio %d, a orientação 'o' ('v' ou 'h') e as coordenadas 'x' ∈ [0,9] e 'y' ∈ [0,9]: \n", i);
        scanf("%1d%c%1d%1d", &T, &o, &x, &y);

        if (percorreToroide(matriz, T, o, x, y)) {
            posicionaNavios(matriz, T, o, x, y, '1');
            N--;
            i++;
        } else {
            printf("Já existe um navio na coordenadas indicadas!\n");
            continue;
        }

    }

    i = 1, N = 0, M = 0, T = 0, x = 0, y = 0, o = ' ';

    printf("Forneça o número M ∈ [1,20] de navios dos Estruturistas: \n");
    scanf("%d", &M);
    while (M > 0) {
        printf("Forneça o tamanho 'T' ∈ [1,5] do navio %d, a orientação 'o' ('v' ou 'h') e as coordenadas 'x' ∈ [0,9] e 'y' ∈ [0,9]: \n", i);
        scanf("%1d%c%1d%1d", &T, &o, &x, &y);

        if (percorreToroide(matriz, T, o, x, y)) {
            posicionaNavios(matriz, T, o, x, y, '2');
            M--;
            i++;
        } else {
            printf("Já existe um navio na coordenadas indicadas!\n");
            continue;
        }

    }

    imprimeMatriz(matriz);

    int A = 0;
    int comboAlgoritmistas = 0, comboEstruturistas = 0;
    char c = ' ';

    printf("Insira o número A ∈ [0,200] de rodadas: \n");
    scanf("%d", &A);

    while (A > 0) {

        printf("Ataque dos Algoritmistas! \n");
        printf("Forneça o tipo de ataque 'c' ('n' ou 'e'): \n");
        scanf(" %c", &c);
        ataque(matriz, c, &comboAlgoritmistas);

        imprimeMatriz(matriz);

        printf("Ataque dos Estruturistas! \n");
        printf("Forneça o tipo de ataque 'c' ('n' ou 'e'): \n");
        scanf(" %c", &c);
        ataque(matriz, c, &comboEstruturistas);

        imprimeMatriz(matriz);

        A--;
    }

    return 0;
}