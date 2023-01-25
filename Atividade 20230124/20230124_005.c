#include <stdio.h>

int calc_fatorial(int n)
{
    int fact=1;
    
    for(int k=1; k<=n; k++)
    {
        fact = fact * k;
    }
    
    return fact;
}
void lista_fatorial(int n, int seq[])
{
    int fatorial[n], cont=0;
    
    for (int i=0; i<n; i++)
    {
        printf("Entre com o %do. numero: ", i+1);
        scanf("%d", &seq[i]);
    }
    
    printf("Sequencia de fatoriais:\n");
    for (int j=0; j<n; j++)
    {
        fatorial[j] = calc_fatorial(seq[j]);
        printf("fatorial[%d] = %d\n", j, fatorial[j]);
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
    
    lista_fatorial(n, seq);

    return 0;
}