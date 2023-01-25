#include <stdio.h>

int main() {
    int n;
    
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    
    while (n < 1 || n >= 100)
    {
        printf("Entrada invalida. Tamanho do vetor: ");
        scanf("%d", &n);
    }
    
    int lista[n], menor, temp, pos;
    
    for (int i=0; i<n; i++)
    {
        printf("Entre com o %do. numero: ", i+1);
        scanf("%d", &lista[i]);
    }
    
    for (int cont=0; cont<n; cont++)
    {
        menor = lista[cont];
        temp = lista[cont];
        for (int j=cont; j<n; j++)
        {
            if(lista[j] <= menor)
            {
                menor = lista[j];
                pos = j;
            }
        }
        lista[cont] = menor;
        lista[pos] = temp;
    }
    
    printf("Lista ordenada:\n");
    for (int k=0; k<n; k++)
    {
        printf("lista[%d] = %d\n", k, lista[k]);
    }

    return 0;
}