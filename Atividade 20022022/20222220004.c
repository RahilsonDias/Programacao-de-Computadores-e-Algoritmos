#include <stdio.h>

int main() {
    int menor, maior, anterior, atual;
    int i;
    
    printf("Digite um numero: ");
    scanf("%d", &anterior);
    menor = anterior;
    maior = anterior;
    
    for (i=1;i<=4;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &atual);
        
        if ((atual > anterior) && (atual > maior))
        {
            maior = atual;
        }
        else
            if ((atual < anterior) && (atual < menor))
            {
                menor = atual;
            }
        anterior = atual;
    }
    
    printf("Menor numero lido: %d\n", menor);
    printf("Maior numero lido: %d", maior);
    
    return 0;
}