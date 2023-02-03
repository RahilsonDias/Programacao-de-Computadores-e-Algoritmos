#include <stdio.h>
#include <string.h>
#define DISTANCE 1000


void TesteEconomia(char a[5][100], char b[])
{
    int menor=b[0];
    int pos=0;
    //printf("%d\n", strlen(str));
    for(int k=0; k<5; k++)
    {
        if(b[k] < menor)
        {
            menor = b[k];
            pos = k;
        }
    }
    printf("Modelo mais economico: %s\n", a[pos]);
}

void Gasto(char a[5][100], char b[])
{
    float gasto=0;
    //printf("%d\n", strlen(str));
    for(int k=0; k<=4; k++)
    {
        gasto = DISTANCE / (float) b[k];
        printf("Gasto por 1000Km do modelo %s: %.2f litros\n", a[k], gasto);
    }
}

int main() {
    char carros[100][100];
    char consumo[100];
    
    for(int i=0; i<5; i++)
    {
        printf("Modelo %d: ", i+1);
        scanf(" %99s", &carros[i]);
    }
    
    for(int j=0; j<5; j++)
    {
        printf("Consumo do modelo %d: ", j+1);
        scanf("%d", &consumo[j]);
    }

    TesteEconomia(carros, consumo);
    Gasto(carros, consumo);

    return 0;
}