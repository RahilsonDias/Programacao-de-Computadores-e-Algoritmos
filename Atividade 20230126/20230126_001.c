#include <stdio.h>

int main() {
    int linha_a=5, linha_b=5, coluna_a=3, coluna_b=3, soma;
    
    int a[5][3] = {{5,5,5}, {6,6,6}, {7,7,7}, {8,8,8}, {9,9,9}};
    int b[5][3] = {{5,5,5}, {6,6,6}, {7,7,7}, {8,8,8}, {9,9,9}};
    
    if(linha_a != linha_b || coluna_a != coluna_b)
    {
        printf(“As matrizes nao tem a mesma ordem”);
    }
    
    for(int i=0;i<linha_a;i++)
    {
        for(int j=0;j<coluna_a;j++)
        {
            printf("Resultado[%d][%d] = %d\n", i+1, j+1, a[i][j] + b[i][j]);
        }
    }

    return 0;
}