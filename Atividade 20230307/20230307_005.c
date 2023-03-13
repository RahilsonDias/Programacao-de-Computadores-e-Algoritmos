#include <stdio.h>

int Ordenar(int *valor1, int *valor2, int *valor3) {
    int aux;

    if (*valor1 > *valor2) {
        aux = *valor1;
        *valor1 = *valor2;
        *valor2 = aux;
    }

    if (*valor1 > *valor3) {
        aux = *valor1;
        *valor1 = *valor3;
        *valor3 = aux;
    }

    if (*valor2 > *valor3) {
        aux = *valor2;
        *valor2 = *valor3;
        *valor3 = aux;
    }

    return (*valor1 == *valor2 && *valor2 == *valor3);
}

int main() {
    int num1, num2, num3;

    printf("Digite um inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite outro inteiro: ");
    scanf("%d", &num2);
    
    printf("Digite outro inteiro: ");
    scanf("%d", &num3);

    int igualdade = Ordenar(&num1, &num2, &num3);

    if (igualdade) {
        printf("Os valores são iguais: %d\n", &num1);
    } else {
        printf("Os valores ordenados sao: %d %d %d\n", &num1, &num2, &num3);
    }

    return 0;
}