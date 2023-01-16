#include <stdio.h>
#include <math.h>

int dec_em_bin(int a)
{
    int soma=0, cont=0;

    while (a > 0)
    {
        if ((a%10)==0)
        {
            soma += 0;
        }
        else
        {
            soma += pow(2,cont);
        }
        a=a/10;
        cont++;
    }
    
    return soma;
}

int main() 
{
    int a, b;
    
    printf("Digite um numero binario: \n");
    scanf("%d", &a);
    
    b = dec_em_bin(a);
    printf("%d em decimal eh: %d \n", a, b);
    
    return 0;
}