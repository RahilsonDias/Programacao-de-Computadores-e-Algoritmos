#include <stdio.h>

void troca (int *p, int *q)
{
   int temp;
   temp = *p; *p = *q; *q = temp;
}

int main() {
    int i, j;
    int *p, *q;
    
    printf("Variavel i: ");
    scanf("%d", &i);
    printf("Variavel j: ");
    scanf("%d", &j);
    
    p = &i;
    q = &j;
    
    troca (p, q);
    
    printf("--Depois de trocar--\n");
    printf("Variavel i: %d\n", *p);
    printf("Variavel j: %d\n", *q);

    return 0;
}