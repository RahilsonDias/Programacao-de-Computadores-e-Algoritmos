#include <stdio.h>

int main() {
    int n, p, ini, soma;
    
    printf("Digite p: ");
    scanf("%d", &p);
    
    for(n=1;n<=p;n++)
    {
        soma = 0;
        for(ini=1;soma!=n*n*n;ini+=2)
        {
            soma = 0;
            for (int i = 0; i < n; i++)
            {
                soma = soma + ini + 2 * i;
            }
        }
        ini = ini - 2;
        printf("%d³ = %d = %d", n, n*n*n, ini);
        for (int i = 1; i < n; i++)
            printf("+%d", ini+2*i);
        printf("\n");  
    }

    return 0;
}