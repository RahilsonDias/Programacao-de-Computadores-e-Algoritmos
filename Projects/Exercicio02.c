#include <stdio.h>

void main() 
{
    char nome[30], sexo[1];
    int idade;
    
    printf("Nome: ");
    scanf("%s", nome);
    printf("Sexo: ");
    scanf("%s", sexo);
    printf("Idade: ");
    scanf("%d", &idade);
    
    if(strcmp(sexo, "f") == 0)
    {
        printf("Usuario e uma mulher");
    }
    else
    {
        printf("Usuario e um homem");
    }

    return 0;
}