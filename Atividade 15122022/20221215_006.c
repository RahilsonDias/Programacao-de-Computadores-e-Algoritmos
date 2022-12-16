#include <stdio.h>

int main() {
    float salario_hora, horas_trabalhadas, salario_total;
    
    printf("Salario por hora: ");
    scanf("%f", &salario_hora);
    
    printf("Horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    
    salario_total = salario_hora * horas_trabalhadas;
    
    printf("Salario total: R$%.2f", salario_total);

    return 0;
}