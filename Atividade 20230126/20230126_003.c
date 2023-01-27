#include <stdio.h>

void multi_escalar(int a[3][3], int escalar, int l, int c)
{
    int i, j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Resultado[%d][%d] = %d\n", i+1, j+1, a[i][j] * escalar);
        }
    }
}
int main() {
    
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int escalar;
    
    printf("Escalar: ");
    scanf("%d", &escalar);
    
    multi_escalar(a, escalar, 3, 3);

    return 0;
}