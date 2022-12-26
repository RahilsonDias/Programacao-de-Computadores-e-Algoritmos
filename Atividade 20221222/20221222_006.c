#include <stdio.h>

int main() {
    int num, soma=0, i;
    
    printf("Numero: ", num);
    scanf("%d", &num);
    
    for(i=1;i<num;i++)
    {
        if(num % i == 0)
        {
            soma += i;
        }
    }
    if(soma == num)
    {
        printf("O numero %d eh perfeito", num);
    }
    else
    {
        printf("O numero %d nao eh perfeito", num);
    }

    return 0;
}