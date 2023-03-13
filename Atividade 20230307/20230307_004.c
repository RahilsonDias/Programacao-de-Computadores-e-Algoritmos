#include <stdio.h>

int main()
{
    int vet[5];
    int *ptrvet = vet;
    
    for(int i=0; i<5; i++){
        printf("Digite um número: ");
        scanf("%d", ptrvet);
        ptrvet += 1;
    }
    
    ptrvet = vet;
    
    for(int i=0; i<5; i++){
        printf("Dobro de vet[%d]: %d\n", i, (*ptrvet)*2);
        ptrvet += 1;
    }
    
    ptrvet = vet;
    
    for(int i=0; i<5; i++){
        if((*ptrvet)%2 == 0){
            printf("Numero par encontrado no endereco: %p\n", ptrvet);
        }
        ptrvet += 1;
    }
    
    return 0;
}