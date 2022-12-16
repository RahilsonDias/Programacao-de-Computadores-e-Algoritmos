#include <stdio.h>

int main() {
    float a, b, soma;
    
    printf("A: ");
    scanf("%f", &a);
    
    printf("B: ");
    scanf("%f", &b);
    
    soma = a + b;
    printf("Resultado de A + B: %.2f", soma);

    return 0;
}