#include <stdio.h>

int main() {
    float altura, peso_ideal;
    
    printf("Altura: ");
    scanf("%f", &altura);
    
    peso_ideal = (72.7 * altura) - 58;
    
    printf("Peso ideal: %.2f kg", peso_ideal);

    return 0;
}