#include <stdio.h>

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
    
    for (int i=n; i>0; i--)
    {
        printf("Entre com o %do. numero: ", i);
        scanf("%d", &seq[i-1]);
    }

    for (int j=0; j<n; j++)
    {
        printf("seq[%d] = %d\n", j, seq[j]);
    }

    return 0;
}