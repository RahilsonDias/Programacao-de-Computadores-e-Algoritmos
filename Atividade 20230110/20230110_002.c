#include <stdio.h>

void contar(int a, int b)
{
    int cont=0, aux_a = a, aux_b = b, size=0;
    
    while(a > 0)
    {
        while(b > 0)
        {
            if ((a%10)==(b%10))
            {
                cont++;
                break;
            }
            b = b/10;
        }
        a = a/10;
        b = aux_b;
        size += 1;
    }
    a = aux_a;
    
    if(cont == size)
    {
        printf("O numero %d eh uma permutacao do numero %d \n", a, b);
    }
    else
    {
        printf("O numero %d nao eh uma permutacao do numero %d \n", a, b);
    }
}

int main() 
{
    
    int a, b, q;
    
    printf("Digite um numero inteiro (a): \n");
    scanf("%d", &a);
    printf("Digite um numero inteiro (b): \n");
    scanf("%d", &b);
    
    contar(a,b);

    return 0;
}