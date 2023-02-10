#include <stdio.h>

void main() 
{
    float conta, taxa_garcom, gorjeta;
    
    printf("Total da conta (R$): ");
    scanf("%f", &conta);
    printf("Taxa do garcom (Porcentagem): ");
    scanf("%f", &taxa_garcom);
    
    gorjeta = conta * taxa_garcom/100;
    
    printf("Gorjeta (R$) : %.2f", gorjeta);

    return 0;
}