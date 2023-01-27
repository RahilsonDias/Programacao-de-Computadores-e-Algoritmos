#include <stdio.h>

void encontrar(int a[3][3], int num, int l, int c)
{
    int i, j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j] == num)
            {
                printf("%d encontrado na matriz em M[%d][%d]\n", num, i+1, j+1);
            }
        }
    }
}
int main() {
    
    int a[3][3] = {{1,2,3}, {5,5,6}, {7,5,9}};
    int num;
    
    printf("Numero: ");
    scanf("%d", &num);
    
    encontrar(a, num, 3, 3);

    return 0;
}