#include <stdio.h>

void lista_pares(int n, int seq[])
{
    int par[100], cont=0;
    
    for (int i=0; i<n; i++)
    {
        printf("Entre com o %do. numero: ", i+1);
        scanf("%d", &seq[i]);
    }
    
    printf("Sequencia de numeros pares:\n");
    for (int j=0; j<n; j++)
    {
        if (seq[j] % 2 == 0)
        {
            par[cont] = seq[j];
            printf("par[%d] = %d\n", cont, par[cont]);
            cont++;
        }
    }
}

int main() {
    int n;
    
    printf("Tamanho da sequencia: ");
    scanf("%d", &n);
    
    while (n < 1 || n >= 100)
    {
        printf("Tamanho da sequencia: ");
        scanf("%d", &n);
    }
    
    int seq[n];
    
    lista_pares(n, seq);

    return 0;
}