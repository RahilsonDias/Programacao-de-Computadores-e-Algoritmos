#include <stdio.h>

void ImprimirPonteiros(float *comeco, float *fim){
    for(;comeco <= fim; comeco++){
        printf("%.1f\n", *comeco);
    }
}
int main() {
    float notas[6] = {2.5,6.5,10,8,3.5,7};
    float temperaturas[4] = {5.5,6.5,7,8};
    float pesos[5] = {14.2,32.5,18.6,80.4,678};
    
    printf("Vetor 1, Parte 1\n");
    ImprimirPonteiros(&notas[0], &notas[3]);
    printf("Vetor 1, Parte 2\n");
    ImprimirPonteiros(&notas[2], &notas[5]);
    printf("Vetor 2, Parte 1\n");
    ImprimirPonteiros(&temperaturas[0], &temperaturas[1]);
    printf("Vetor 2, Parte 2\n");
    ImprimirPonteiros(&temperaturas[2], &temperaturas[3]);
    printf("Vetor 3, Parte 1\n");
    ImprimirPonteiros(&pesos[1], &pesos[3]);
    printf("Vetor 3, Parte 2\n");
    ImprimirPonteiros(&pesos[3], &pesos[4]);

    return 0;
}