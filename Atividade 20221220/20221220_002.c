#include <stdio.h>

int main() {
    int n,soma = 0;
    int i;
    
    for (i=1;i<=50;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            soma += n; 
        }
    }
    
    printf("Soma dos numeros impares: %d", soma);

    return 0;
}