#include <stdio.h>
#include <string.h>

void Localizar(char nome[100], char equipes[100][100])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(strcmp(nome, equipes[i*j]) == 0)
            {
                printf("Aluno da equipe %d", i+1);
            }
        }
    }
    printf("\n");
}

int main() {
    char nome[100];
    char equipes[100][100];
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("Integrante %d da equipe %d: ", j+1, i+1);
            scanf("%s", &equipes[i*j]);
        }
    }
    
    printf("Digite um aluno: ");
    scanf("%s", &nome);
    
    Localizar(nome, equipes);
    
    return 0;
}