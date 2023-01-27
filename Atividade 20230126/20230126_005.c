#include <stdio.h>

int main() {
    
    int a[5][5] = {{1,2,3,7,8}, {5,5,6,5,4}, {7,5,9,1,3}, {5,5,6,7,8}, {4,3,4,5,6}};
    
    printf("Diagonal Principal:\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i == j)
            {
                printf("M[%d][%d] = %d\n", i+1, j+1, a[i][j]);
            }
        }
    }
    
    printf("Diagonal Secundaria:\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i + j == 4)
            {
                printf("M[%d][%d] = %d\n", i+1, j+1, a[i][j]);
            }
        }
    }
    
    int soma_l4=0;
    for(int k=0;k<5;k++)
    {
        soma_l4 += a[3][k];
    }
    printf("Soma da linha 4: %d\n", soma_l4);
    
    int soma_c2=0;
    for(int k=0;k<5;k++)
    {
        soma_c2 += a[k][2];
    }
    printf("Soma da linha 4: %d\n", soma_c2);
    
    printf("Matriz exceto diagonal Principal:\n");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i != j)
            {
                printf("M[%d][%d] = %d\n", i+1, j+1, a[i][j]);
            }
        }
    }
    
    return 0;
}