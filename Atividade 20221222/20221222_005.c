#include <stdio.h>

int main() {
    float num=1, soma;
    
    for(float den=1;den<=50;den++)
    {
        soma = soma + num/den;
        num += 2;
    }

    printf("Soma: %f\n", soma);
    
    return 0;
}