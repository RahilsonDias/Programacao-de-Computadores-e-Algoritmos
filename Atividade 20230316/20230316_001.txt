#include <stdio.h>
#include <stdlib.h>

int* CriaVetor(int tamanho){
    int* ptrvet = (int*) malloc(tamanho * sizeof(int));
    if(ptrvet != NULL){
        for(int i=0; i<tamanho; i++){
            printf("Elemento %d: ", i+1);
            scanf("%d", &ptrvet[i]);
        }
    }
    return ptrvet;
}

void MinMax(int tamanho, int* ptrvet, int* ptrmin, int* ptrmax){
    *ptrmin = ptrvet[0];
    *ptrmax = ptrvet[0];
    
    for(int i=1; i<tamanho; i++){
        if(ptrvet[i] < *ptrmin){
            *ptrmin = ptrvet[i];
        }
        if(ptrvet[i] > *ptrmax){
            *ptrmax = ptrvet[i];
        }
    }
}

int main() {
    int tam=0;
    int min=0;
    int max=0;
    
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);
    
    int *vet = CriaVetor(tam);
    MinMax(tam, vet, &min, &max);
    
    printf("--Resultado--\n");
    printf("Menor valor: %d\n", min);
    printf("Maior valor: %d\n", max);
    
    free(vet);

    return 0;
}