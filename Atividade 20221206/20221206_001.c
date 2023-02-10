#include <stdio.h>

int main() 
{
    float base, altura, area;
    
    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &altura);
    
    area = base * altura / 2;
    printf("Area: %.2f", area);

    return 0;
}