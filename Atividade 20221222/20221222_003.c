#include <stdio.h>

int main()
{
    int num,soma_pares,soma_impares;
    soma_impares = 0;
    soma_pares = 0;

    printf("Numero: ");
    scanf("%d", &num);
    while (num < 1000)
    {
        if(num % 2 == 0)
        {
            soma_pares += num;
        }
        else
        {
            soma_impares += num;
        }
        printf("Numero: ");
        scanf("%d", &num);
    }
    printf("Soma dos numeros pares: %d\n", soma_pares);
    printf("Soma dos numeros impares: %d\n", soma_impares);

    return 0;
}