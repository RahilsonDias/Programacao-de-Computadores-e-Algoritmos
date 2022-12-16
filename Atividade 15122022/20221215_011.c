#include <stdio.h>

int main() {
    float salario_hora, horas_trabalhadas, salario_total, i_renda, inss, sindicato, salario_liquido;
    
    printf("Salario por hora: ");
    scanf("%f", &salario_hora);
    
    printf("Horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    
    salario_total = salario_hora * horas_trabalhadas;
    printf("Salario bruto: R$%.2f \n", salario_total);
    
    i_renda = salario_total * 0.11;
    printf("Imposto de renda: R$%.2f \n", i_renda);
    
    inss = salario_total * 0.08;
    printf("INSS: R$%.2f \n", inss);
    
    sindicato = salario_total * 0.05;
    printf("Sindicato: R$%.2f \n", sindicato);
    
    salario_liquido = salario_total - i_renda - inss - sindicato;
    printf("Salario liquido: R$%.2f \n", salario_liquido);

    return 0;
}