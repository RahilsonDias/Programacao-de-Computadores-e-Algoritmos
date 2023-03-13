#include <stdio.h>

void MinMax(int vet[],int* min, int* max, int tam)
{
    *min = vet[0];
    *max = vet[0];
    
    for (int i=0; i<tam; i++){
        if (*min>vet[i]){
            *min = vet[i];
        }
        if (*max<vet[i]){
            *max = vet[i]; 
        }
    }
}

int main() {

    int min, max, vet[5], tam=5;
    
    for (int i=0; i<tam; i++){
        printf("Digite valor %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    
    MinMax(vet,&min,&max, tam);
    
    printf("\nValor minimo: %d\nValor maximo: %d ", min, max);
    
    return 0;
}