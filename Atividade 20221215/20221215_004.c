#include <stdio.h>

int main() {
    float raio, area;
    
    printf("Raio do circulo: ");
    scanf("%f", &raio);
    
    area = raio * raio * 3.14;
    printf("Area do circulo: %.2f cm2", area);

    return 0;
}