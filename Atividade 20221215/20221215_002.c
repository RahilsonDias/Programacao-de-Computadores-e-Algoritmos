#include <stdio.h>

int main() {
    float ap1, ap2, ap3, ap4, media;
    
    printf("Nota 1: ");
    scanf("%f", &ap1);
    
    printf("Nota 2: ");
    scanf("%f", &ap2);
    
    printf("Nota 3: ");
    scanf("%f", &ap3);
    
    printf("Nota 4: ");
    scanf("%f", &ap4);
    
    media = (ap1 + ap2 + ap3 + ap4) / 4;
    printf("Media do aluno: %.2f", media);

    return 0;
}