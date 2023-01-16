#include <stdio.h>

int contar(int n, int d)
{
    int cont=0;
    while (n > 0)
    {
        if ((n%10)==d)
            cont++;
        n=n/10;
    }
    return cont;
}

int main() {
    
    int n, d, q;
    
    printf("Digite um numero inteiro (n): \n");
    scanf("%d", &n);
    printf("Digite um numero inteiro entre 0 e 9 (d): \n");
    scanf("%d", &d);
    
    if(d < 0 || d > 9)
    {
        printf("Entrada inválida\n");
        printf("Digite um numero inteiro (n): \n");
        scanf("%d", &n);
    }
    else
    {
        q = contar(n,d);
    }
    
    printf("O numero %d aparece %d vezes no numero %d.", d, q, n);

    return 0;
}