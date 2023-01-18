#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float entrada()
{
    float n;

    printf("Numero: ");
    scanf("%f", &n);

    while(n < 0 || n > 1)
    {
        printf("Entrada invalida. Numero: ");
        scanf("%f", &n);
    }

    return n;
}

float arctan(float x)
{
    int j=0, k=1;
    float soma=0;

    while(fabs(pow(x, k)/k) >= 0.0001)
    {
        if(j % 2 == 0)
        {
            soma += pow(x, k)/k;
        }
        else
        {
            soma -= pow(x, k)/k;
        }
        j += 1;
        k += 2;
    }

    return soma;
}

void saida(float m, float n)
{
    printf("Arcotangente de %f: %f", m, n);
}

int main()
{
    float num, atg;

    num = entrada();

    atg = arctan(num);

    saida(num, atg);

    return 0;
}