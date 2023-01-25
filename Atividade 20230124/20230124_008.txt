#include <stdio.h>

int main() {
    int n;
    
    printf("Tamanho dos vetores: ");
    scanf("%d", &n);
    
    while (n < 1 || n >= 100)
    {
        printf("Entrada invalida. Tamanho dos vetores: ");
        scanf("%d", &n);
    }
    
    int vet1[n], vet2[n], soma=0;
    
    for (int i=0; i<n; i++)
    {
        printf("Entre com o %do. numero do vetor 1: ", i+1);
        scanf("%d", &vet1[i]);
    }

    for (int j=0; j<n; j++)
    {
        printf("Entre com o %do. numero do vetor 2: ", j+1);
        scanf("%d", &vet2[j]);
    }
    
    for (int k=0; k<n; k++)
    {
        soma += vet1[k] * vet2[k];
    }
    
    printf("Produto Escalar: %d", soma);

    return 0;
}