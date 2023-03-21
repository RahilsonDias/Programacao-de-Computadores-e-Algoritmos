#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n; // dimensões da matriz
    int **matriz; // ponteiro para a matriz
    
    printf("Linhas: ");
    scanf("%d", &m);
    printf("Colunas: ");
    scanf("%d", &n);
    
    // alocação da matriz usando aritmética de ponteiros
    matriz = (int**) malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        *(matriz + i) = (int*) malloc(n * sizeof(int));
    }
    
    // inicialização da matriz
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &*(*(matriz + i) + j));
        }
    }
    
    printf("--Resultado--\n");
    // impressão da matriz usando aritmética de ponteiros
    printf("Matriz usando aritmética de ponteiros:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(*(matriz + i) + j));
        }
        printf("\n");
    }
    
    // impressão da matriz usando indexes
    printf("\nMatriz usando indexes:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    free(matriz);

    return 0;
}