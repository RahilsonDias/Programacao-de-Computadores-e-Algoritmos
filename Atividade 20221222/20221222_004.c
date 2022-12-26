#include <stdio.h>

int main()
{
    int num,multiplos=0;
    int i;

    printf("Numero: ");
    scanf("%d", &num);

    for (i=2;i<num;i++)
    {
        if(num % i == 0)
        {
            multiplos++;
            printf("multi %d",multiplos);
        }
    }
    if (multiplos > 0)
    {
        printf("Numero nao eh primo\n");
    }
    else
    {
        printf("Numero eh primo\n");
    }

    return 0;
}