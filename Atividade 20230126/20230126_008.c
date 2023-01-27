#include <stdio.h>

void mult_matrizes(int a[5][3], int b[3][5], int c[5][5], int la, int ca, int lb, int cb)
{
    if(ca != lb)
    {
        printf("As matrizes nao podem ser multiplicadas");
    }
    int i, j;
    for(i=0;i<ca;i++)
    {
        for(j=0;j<lb;j++)
        {
            int soma=0;
            for(int k=0; k<5; k++)
            {
                soma += a[i][k] * b[k][j];
            }
            c[i][j] = soma;
            printf("Resultado[%d][%d] = %d\n", i+1, j+1, c[i][j]);
        }
    }
}
int main() {
    
    int a[5][3] = {{5,5,5}, {6,6,6}, {7,7,7}, {8,8,8}, {9,9,9}};
    int b[3][5] = {{5,5,5,6,6}, {7,7,7,8,8}, {9,9,9,1,2}};
    int c[5][5] = {{0,0,0}, {0,0,0}, {0,0,0}};
    
    mult_matrizes(a, b, c, 5, 3, 3, 5);

    return 0;
}