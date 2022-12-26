#include <stdio.h>

int main() {
    int n,m;
    int x,y;
    int res, resmax;
    int xmax, ymax;
    
    printf("Digite n e m separados por espaco: ");
    scanf("%d %d", &n,&m);
    
    xmax = ymax = 0;
    resmax = 0;
    
    for(x=0;x<=n;x++)
    {
        for(y=0;y<=m;y++)
        {
            res = x*y - x*x + y;
            if(res > resmax)
            {
                resmax = res;
                xmax = x;
                ymax = y;
            }
        }
    }
    printf("Valor maximo: %d, alcancado com %d e %d", resmax, xmax, ymax);

    return 0;
}