#include <stdio.h>

int main() {
    float massa_inicial, massa;
    int tempo=0,horas=0,minutos=0,segundos=0;
    
    printf("Massa: ");
    scanf("%f", &massa_inicial);
    massa = massa_inicial;
    
    while(massa >= 0.5)
    {
        massa /= 2;
        tempo += 50;
    }

    horas += tempo / 3600;
    minutos += (tempo - (horas*3600)) / 60;
    segundos += tempo - (horas*3600) - (minutos*60);

    
    printf("Massa inicial: %f\n", massa_inicial);
    printf("Massa final: %f\n", massa);
    printf("Tempo: %d horas %d minutos %d segundos\n", horas, minutos, segundos);
    printf("%d", tempo);

    return 0;
}