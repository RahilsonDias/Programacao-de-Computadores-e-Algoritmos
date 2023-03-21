#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MediaDesvio(float* notas, int tamanho, float* ptrmedia, float* ptrdesvio){
    float soma = 0;
    float media = 0;
    float dp = 0;
    
    for(int i=0; i<tamanho; i++){
        soma = soma + notas[i];
    }
    
    //printf("Soma: %.2f\n", soma);
    
    *ptrmedia = soma/(float)tamanho;
    
    for(int i=0; i<tamanho; i++){
        dp = dp + pow((notas[i] - *ptrmedia), 2);
    }
    
    *ptrdesvio = pow((dp/tamanho), 0.5);
}

int main() {
    
    float* notas;
    int tam = 0;
    float media = 0;
    float desvio = 0;
    
    do{
        printf("Quantidade de alunos: ");
        scanf("%d", &tam);
    } while(tam <= 0);
    
    notas = (float*) malloc(tam * sizeof(float));
    if(notas != NULL){
        for(int i=0; i<tam; i++){
            printf("Nota do aluno %d: ", i+1);
            scanf("%f", &notas[i]);
        }
    }
    
    MediaDesvio(notas, tam, &media, &desvio);
    
    printf("--Resultado--\n");
    printf("Media: %.2f\n", media);
    printf("Desvio Padrão: %.2f\n", desvio);
    
    free(notas);

    return 0;
}