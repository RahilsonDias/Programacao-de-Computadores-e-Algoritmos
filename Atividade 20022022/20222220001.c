#include <stdio.h>

int main() {
    float n,soma = 0;
    int i;
    
    for (i=1;i<=5;i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &n);
        soma += n;
    }
    
    printf("Soma dos numeros: %.2f", soma);

    return 0;
}