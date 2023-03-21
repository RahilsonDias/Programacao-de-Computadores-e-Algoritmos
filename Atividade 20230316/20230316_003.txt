#include <stdio.h>
#include <stdlib.h>

void SomaMatrizes(int *ptrl1, int *ptrc1, int** ptrm1,int* ptrl2, int* ptrc2, int** ptrm2){
    int r, s;
    int** soma;
    
    if((*ptrl1 != *ptrl2) || (*ptrc1 != *ptrc2)){
        printf("Erro: Impossível realizar a soma\n");
    }
    else{
        r = *ptrl1;
        s = *ptrc1;
        soma = (int**) malloc(r * sizeof(int*));
        for (int i = 0; i < r; i++) {
            *(soma + i) = (int*) malloc(s * sizeof(int));
        }
        
        printf("Soma das matrizes:\n");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < s; j++) {
                soma[i][j] = ptrm1[i][j] + ptrm2[i][j];
                printf("%d ", soma[i][j]);
            }
            printf("\n");
        }
    
        free(soma);
    }
}

int main() {
    int m, n; // dimensões da matriz 1
    int** matriz1; // ponteiro para a matriz 1
    int p, q;
    int** matriz2;
    
    printf("Linhas da matriz 1: ");
    scanf("%d", &m);
    printf("Colunas da matriz 1: ");
    scanf("%d", &n);
    
    // alocação da matriz 1 usando aritmética de ponteiros
    matriz1 = (int**) malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        *(matriz1 + i) = (int*) malloc(n * sizeof(int));
    }
    
    // inicialização da matriz 1
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &*(*(matriz1 + i) + j));
        }
    }
    
    printf("Linhas da matriz 2: ");
    scanf("%d", &p);
    printf("Colunas da matriz 2: ");
    scanf("%d", &q);
    
    // alocação da matriz 2 usando aritmética de ponteiros
    matriz2 = (int**) malloc(m * sizeof(int*));
    for (int i = 0; i < p; i++) {
        *(matriz2 + i) = (int*) malloc(q * sizeof(int));
    }
    
    // inicialização da matriz 2
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &*(*(matriz2 + i) + j));
        }
    }
    
    printf("--Resultado--\n");
    SomaMatrizes(&m, &n, matriz1, &p, &q, matriz2);
    
    free(matriz1);
    free(matriz2);

    return 0;
}