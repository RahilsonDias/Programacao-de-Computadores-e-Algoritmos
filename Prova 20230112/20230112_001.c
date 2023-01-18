#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota, menor, maior, soma, media;
    float i;

    maior = 0;
    soma = 0;
    i = 0;
    media = 0;
    
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    
    menor = nota;
    while(nota >= 0)
    {
        if(nota < menor)
        {
            menor = nota;
        }
        if(nota > maior)
        {
            maior = nota;
        }
        soma += nota;
        i += 1;

        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
    }
    media = soma/i;
    
    if(menor < 0)
    {
        menor = 0;
    }
    
    if(i == 0)
    {
        media = 0;
    }
    
    printf("A menor nota foi: %.2f \n", menor);
    printf("A maior nota foi: %.2f \n", maior);
    printf("A media da sala foi: %.2f \n", media);

    return 0;
}
