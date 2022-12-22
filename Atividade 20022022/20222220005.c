#include <stdio.h>

int main() {
    int menor, maior, anterior, atual;
    int i;
    
    printf("Digite um numero: ");
    scanf("%d", &anterior);
    menor = anterior;
    maior = anterior;
    
    if (anterior > 0)
    {
        for (i=1;i<=4;i++)
        {
            printf("Digite um numero: ");
            scanf("%d", &atual);
            
            if(atual > 0)
            {
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
            else 
            {
                printf("Entrada invalida, use apenas numeros positivos.");
                exit(0);
            }
        }
    printf("Menor numero lido: %d\n", menor);
    printf("Maior numero lido: %d", maior);
    }
    else
    {
        printf("Entrada invalida, use apenas numeros positivos.");
    }
    
    return 0;
}