#include <stdio.h>

void main() 
{
    float salario, reajuste;
    
    printf("Salario atual: ");
    scanf("%f", &salario);
    reajuste = salario * 1.10;
    
    printf("Novo salario: %.2f", reajuste);

    return 0;
}