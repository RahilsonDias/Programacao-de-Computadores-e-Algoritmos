#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* BuscaLetra(char* string, char letra, int* tamanho) {
    int i;
    int* posicoes = NULL;
    *tamanho = 0;
    
    // busca as posições onde a letra foi encontrada na string
    for (i = 0; i < strlen(string); i++) {
        if (*(string + i) == letra) {
            (*tamanho)++;
            posicoes = (int*) realloc(posicoes, (*tamanho) * sizeof(int));
            *(posicoes + (*tamanho) - 1) = i;
        }
    }
    
    return posicoes;
}

int main() {
    char* string;
    char letra;
    int tamanho, i;
    
    string = (char*) malloc(100 * sizeof(char));
    
    printf("String: ");
    scanf("%s", string);
    printf("Char: ");
    scanf(" %c", &letra);
    
    int* posicoes = BuscaLetra(string, letra, &tamanho);
    
    printf("\n--Resultado--\n");
    
    printf("Posicoes da letra '%c' na string '%s': \n", letra, string);
    for (i = 0; i < tamanho; i++) {
        printf("%d ", *(posicoes + i));
    }
    printf("\nTamanho do vetor de posicoes: %d\n", tamanho);
    
    free(posicoes);
    free(string);
    return 0;
}