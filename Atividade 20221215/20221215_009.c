#include <stdio.h>

int main() {
    int a, b;
    float c, resultado1, resultado2, resultado3;
    
    printf("A (inteiro): ");
    scanf("%i", &a);
    
    printf("B (inteiro): ");
    scanf("%i", &b);
    
    printf("C (real): ");
    scanf("%f", &c);
    
    resultado1 = (2 * a) * (b / 2);
    printf("Resultado 1: %.2f \n", resultado1);
    
    resultado2 = (3 * a) + c;
    printf("Resultado 2: %.2f \n", resultado2);
    
    resultado3 = c * c * c;
    printf("Resultado 3: %.2f \n", resultado3);

    return 0;
}