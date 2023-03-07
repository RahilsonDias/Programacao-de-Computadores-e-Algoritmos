#include <stdio.h>
#define NULL 0

int *BuscaPonteiros(int *comeco, int *fim){
    for(;comeco <= fim; comeco++){
        if(*comeco == 2){
            printf("Endereco encontrado: %p\n", comeco);
        }
    }
    return NULL;
}
int main() {
    int notas[10] = {2,6,10,8,2,7,2,5,3,9};
    
    *BuscaPonteiros(&notas[0], &notas[10]);

    return 0;
}