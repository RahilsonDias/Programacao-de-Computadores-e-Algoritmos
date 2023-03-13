#include <stdio.h>

int SomaVetores(int *ptrvet1, int *ptrvet2, int *ptrvet3, int tam) {
    
    if (sizeof(ptrvet1) != sizeof(ptrvet2)) {
        return 0;
    }

    for (int i = 0; i < tam; i++) {
        ptrvet3[i] = *(ptrvet1 + i) + *(ptrvet2 + i);
    }

    return 1;
}

int main() {
    int vet1[5] = {0,1,2,3,4};
    int vet2[5] = {7,5,6,8,9};
    int vet3[5];
    int tam = 5;

    int resultado = SomaVetores(vet1, vet2, vet3, tam);

    if (resultado == 0) {
        printf("Erro: os arrays têm tamanhos diferentes.\n");
    } else {
        printf("Soma dos arrays: \n");
        for (int i=0; i<tam; i++) {
            printf("%d\n", vet3[i]);
        }
    }

    return 0;
}