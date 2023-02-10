#include <stdio.h>

int main() {
    float metro, centimetro;
    
    printf("Medida em metros: ");
    scanf("%f", &metro);
    
    centimetro = metro * 100;
    printf("Medida em centimetros: %.2f cm", centimetro);

    return 0;
}