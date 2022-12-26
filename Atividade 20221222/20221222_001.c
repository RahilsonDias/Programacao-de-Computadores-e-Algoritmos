#include <stdio.h>
#include <math.h>

int main() {
    float x,xA,xB,y,e;
    
    printf("Numero: ");
    scanf("%f", &y);
    
    xA = y/2;
    xB = xA - (pow(xA, 2) - y)/(2 * xA);
    
    while(fabs(xB - xA) >= 0.1)
    {
        xA = xB;
        xB = xA - (pow(xA, 2) - y)/(2 * xA);
    }
    
    x = sqrt(y);
    e = fabs(x - xB);
    printf("Aproximacao: %f\n", xB);
    printf("Valor exato: %f\n", x);
    printf("Erro: %f\n", e);

    return 0;
}