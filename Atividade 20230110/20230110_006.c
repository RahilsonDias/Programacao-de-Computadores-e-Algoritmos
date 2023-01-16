#include <stdio.h>

void bin_em_dec(int a)
{
    while (a > 0)
    {
        int bin=0;
        bin = a%2;
        a=a/2;
        printf("%d", bin);
    }
}

int main() 
{
    
    int a;
    
    printf("Digite um numero binario: \n");
    scanf("%d", &a);
    
    printf("%d em binario eh: \n", a);
    bin_em_dec(a);
    
    return 0;
}