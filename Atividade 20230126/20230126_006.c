#include <stdio.h>

int main() {
    
    int a[5][5] = {{1,2,3,7,8}, {5,5,6,5,4}, {7,5,9,1,3}, {5,5,6,7,8}, {4,3,4,5,6}};
    
    int soma_l;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            soma_l += a[i][j];
        }
        printf("Soma da linha %d: %d\n", i+1, soma_l);
    }
    
    int soma_c;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            soma_c += a[j][i];
        }
        printf("Soma da coluna %d: %d\n", i+1, soma_c);
    }
    
    int soma_dp=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i == j)
            {
                soma_dp += a[i][j];
            }
        }
    }
    printf("Soma da diagonal principal: %d\n", soma_dp);
    
    int soma_ds=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i + j == 4)
            {
                soma_ds += a[i][j];
            }
        }
    }
    printf("Soma da diagonal secundaria: %d\n", soma_ds);
    
    
    if((soma_l == soma_c == 45) && (soma_dp == soma_ds == 15))
    {
        printf("A matriz eh um quadrado mágico");
    }
    else
    {
        printf("A matriz nao eh um quadrado mágico");
    }
    
    return 0;
}