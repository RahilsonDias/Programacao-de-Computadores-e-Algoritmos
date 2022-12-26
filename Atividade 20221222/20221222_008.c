#include <stdio.h>

int main() {
    int c1,c2,hip,n,achado;
    
    printf("Hipotenusa limite: ");
    scanf("%d", &n);
    
    for(hip=1;hip<=n;hip++)
    {
        achado = 0;
        for(c1=1;(c1<hip)&&(achado==0);c1++)
        {
            c2 = c1;
            while(c1*c1 + c2*c2 < hip*hip)
            {
                c2++;
            }
            if(c1*c1 + c2*c2 == hip*hip)
            {
                printf("Hipotenusa encontrada: %d\n", hip);
                achado = 1;
            }
        }
    }

    return 0;
}