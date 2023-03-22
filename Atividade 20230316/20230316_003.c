#include <stdio.h>
#include <stdlib.h>

void SomaMatrizes(int *ptrl1, int *ptrc1, double** ptrm1, int* ptrl2, int* ptrc2, double** ptrm2){
    int r, s;
    double** soma;
    
    // Verifica se as matrizes possuem a mesma ordem
    if((*ptrl1 != *ptrl2) || (*ptrc1 != *ptrc2)){
        printf("Erro: Impossível realizar a soma\n");
    }
    else{
        r = *ptrl1;
        s = *ptrc1;
        
        soma = (double**) malloc(r * sizeof(double*));
        for (int i = 0; i < r; i++) {
            *(soma + i) = (double*) malloc(s * sizeof(double));
        }
        
        printf("Soma das matrizes:\n");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < s; j++) {
                *(*(soma+i)+j) = *(*(ptrm1+i)+j) + *(*(ptrm2+i)+j);
                printf("%.2lf ", *(*(soma+i)+j));
            }
            printf("\n");
        }
    
        free(soma);
    }
}

int main() {
    int m, n;
    double** matriz1;
    int p, q;
    double** matriz2;
    
    printf("Linhas da matriz 1: ");
    scanf("%d", &m);
    printf("Colunas da matriz 1: ");
    scanf("%d", &n);
    
    // Matriz 1 - Alocação
    matriz1 = (double**) malloc(m * sizeof(double*));
    for (int i = 0; i < m; i++) {
        *(matriz1 + i) = (double*) malloc(n * sizeof(double));
    }
    
    // Matriz 1 - Preenchimento
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%lf", &*(*(matriz1 + i) + j));
        }
    }
    
    printf("Linhas da matriz 2: ");
    scanf("%d", &p);
    printf("Colunas da matriz 2: ");
    scanf("%d", &q);
    
    // Matriz 2 - Alocação
    matriz2 = (double**) malloc(m * sizeof(double*));
    for (int i = 0; i < p; i++) {
        *(matriz2 + i) = (double*) malloc(q * sizeof(double));
    }
    
    // Matriz 2 - Preenchimento
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%lf", &*(*(matriz2 + i) + j));
        }
    }
    
    printf("--Resultado--\n");
    SomaMatrizes(&m, &n, matriz1, &p, &q, matriz2);
    
    free(matriz1);
    free(matriz2);

    return 0;
}
