#include <stdio.h>
#include <string.h>

// Função para imprimir a lista, apenas para debug
void ImprimirLista(char lista[][100])
{
    for(int j=0; j<20; j++)
    {
        printf("%dº nome da lista: %s\n", j+1, lista[j]);
    }
}

void Localizar(char nome[100], char equipes[100][100])
{
    int pos=0;
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(strcmp(nome, equipes[pos]) == 0)
            {
                printf("O aluno '%s' eh da equipe %d", equipes[pos], i+1);
            }
            pos++;
        }
    }
    printf("\n");
}

int main() {
    char nome[100];
    char equipes[100][100];
    int pos=0;
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("Integrante %d da equipe %d: ", j+1, i+1);
            scanf("%s", &equipes[pos]);
            pos++;
        }
    }
    
    //ImprimirLista(equipes);
    
    printf("Digite um aluno: ");
    scanf("%s", &nome);
    
    Localizar(nome, equipes);
    
    return 0;
}