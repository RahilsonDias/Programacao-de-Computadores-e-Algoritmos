#include <stdio.h>

void contar(int a, int b)
{
    int cont=0, aux_a = a, aux_b = b, size=0;
    
    while(size < 3)
    {
        if ((a%10)==(b%10))
        {
            cont++;
        }
        b = b/10;
        a = a/10;
        size += 1;
    }
    a = aux_a;
    b = aux_b;
    
    if(cont == size)
    {
        printf("O numero %d corresponde aos ultimos digitos do numero %d \n", b, a);
    }
    else
    {
        printf("O numero %d corresponde aos ultimos digitos do numero %d \n", b, a);
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