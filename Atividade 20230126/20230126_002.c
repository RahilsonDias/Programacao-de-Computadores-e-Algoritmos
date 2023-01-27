#include <stdio.h>

void soma_matrizes(int a[5][3], int b[5][3], int la, int ca, int lb, int cb)
{
    if(la != lb || ca != cb)
    {
        printf("As matrizes nao tem a mesma ordem");
    }
    int i, j;
    for(i=0;i<la;i++)
    {
        for(j=0;j<ca;j++)
        {
            printf("Resultado[%d][%d] = %d\n", i+1, j+1, a[i][j] + b[i][j]);
        }
    }
}
int main() {
    
    int a[5][3] = {{5,5,5}, {6,6,6}, {7,7,7}, {8,8,8}, {9,9,9}};
    int b[5][3] = {{5,5,5}, {6,6,6}, {7,7,7}, {8,8,8}, {9,9,9}};
    
    soma_matrizes(a, b, 5, 3, 5, 3);

    return 0;
}