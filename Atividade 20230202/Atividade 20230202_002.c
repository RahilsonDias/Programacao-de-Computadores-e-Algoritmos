#include <stdio.h>
#include <string.h>

void ImprimirLista(char lista[][120], int tam)
{
    for(int j=0; j<tam; j++)
    {
        printf("%dº nome da lista: %s\n", j+1, lista[j]);
    }
}

void RemoverNome(char lista[][120], int tam)
{
    char nome[120];
    
    printf("Insira um nome para excluir da lista: ");
    scanf("%s", nome);
    
    for(int j=0; j<tam; j++)
    {
        if(strcmp(lista[j], nome) != 0)
        {
            printf("%dº nome da lista: %s\n", j+1, lista[j]);
        }
        else
        {
            strcpy(lista[j], "~");
            printf("Nome excluido\n");
        }
    }
}

void Ordenar(char lista[20][120], int tam)
{
    char temp[120];
    
    for(int i=0; i<tam; i++)
    {
        for(int j=i; j<tam; j++)
        {
            if(strcmp(lista[i], lista[j]) > 0)
            {
                strcpy(temp, lista[i]);
                strcpy(lista[i], lista[j]);
                strcpy(lista[j], temp);
            }
        }
    }
    
    printf("Lista ordenada: \n");
    for(int k=0; k<tam; k++)
    {
        printf("%dº nome da lista: %s\n", k+1, lista[k]);
    }
}

int main() {
    char lista[20][120];
    char nome[120];
    int tam=0;
    int opcao=5;
    
    printf("Tamanho da lista: ");
    scanf("%d", &tam);
    
    for(int i=0; i<tam; i++)
    {
        printf("Insira o %dº nome da lista: ", i+1);
        scanf("%s", lista[i]);
    }
    
    while(opcao != 0)
    {
        printf("Menu: \n");
        printf("Imprimir a lista (1) \n");
        printf("Remover um elemento da lista (2) \n");
        printf("Ordenar a lista alfabeticamente (3) \n");
        printf("Finalizar (0) \n");
        printf("Sua escolha: ");
        scanf("%d", &opcao);
        
        if(opcao == 1)
        {
            ImprimirLista(lista, tam);
        }
        if(opcao == 2)
        {
            RemoverNome(lista, tam);
        }
        if(opcao == 3)
        {
            Ordenar(lista, tam);
        }
    }
    
    printf("Finalizado. Tenha um bom dia!");
    
    return 0;
}