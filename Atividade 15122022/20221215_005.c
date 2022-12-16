#include <stdio.h>

int main() {
    float lado, area, area_dobrada;
    
    printf("Lado do quadrado: ");
    scanf("%f", &lado);
    
    area = lado * lado;
    area_dobrada = 2 * area;
    
    printf("Dobro da area do quadrado: %.2f cm2", area_dobrada);

    return 0;
}