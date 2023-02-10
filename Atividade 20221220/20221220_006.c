#include <stdio.h>

int main() 
{
    int i,j,soma;
    char confirma;
    
    printf("Tabuada da adição: \n");
    for (i=1; i<11; i++)
    {
        printf("Tabuada do %d:\n", i);
        for (j=1; j<11; j++)
        {
            soma = i + j;
            printf("%d + %d = %d\n", i, j, soma);
        }
    }
    
    return 0;
}