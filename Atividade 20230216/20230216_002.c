#include <stdio.h>
#include <string.h>

void interseccao(int A[], int B[], int C[]) {
    int i = 1, j = 1, k = 1;
    while (i <= A[0] && j <= B[0]) {
        if (A[i] == B[j]) {
            C[k] = A[i];
            i++;
            j++;
            k++;
        } else if (A[i] < B[j]) {
            i++;
        } else {
            j++;
        }
    }
    C[0] = k - 1;
}


int main() {
    int n, conjuntos[100][101], inter[101];
    
    // Lê o número de conjuntos
    printf("Digite o número de conjuntos: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Digite o tamanho do conjunto %d: ", i+1);
        scanf("%d", &conjuntos[i][0]);
        for (int j = 1; j <= conjuntos[i][0]; j++) {
            printf("Digite o elemento %d do conjunto %d: ", j, i+1);
            scanf("%d", &conjuntos[i][j]);
        }
    }
    
    interseccao(conjuntos[0], conjuntos[1], inter);
    for (int i = 2; i < n; i++) {
        interseccao(inter, conjuntos[i], inter);
    }
    
    printf("Intersecção: \n");
    printf("inter[0] = %d \n", inter[0]);
    for (int i = 1; i <= inter[0]; i++) {
        printf("inter[%d] = %d\n", i, inter[i]);
    }
    printf("\n");
    
    return 0;
}