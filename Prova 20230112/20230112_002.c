#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int entrada()
{
    int n;

    printf("Numero: ");
    scanf("%d", &n);

    while(n < 0)
    {
        printf("Numero: ");
        scanf("%d", &n);
    }

    return n;
}

int hiperfact(int n)
{
    int soma=1;

    for(int i=1;i<=n;i++)
    {
        soma *= pow(i, i);
    }
    
    return soma;
}

void saida(int m, int n)
{
    printf("Hiperfatorial de %d: %d", m, n);
}

int main()
{
    int num, hipf;

    num = entrada();

    hipf = hiperfact(num);

    saida(num, hipf);

    return 0;
}