#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogar_dado()
{
    int r = 1 + (rand() % 6);
    return r;
}

int main() {
    int n, r;
    srand(time(0));
    
    printf("Numero de jogadas do dado: ");
    scanf("%d", &n);
    
    int faces[6];
    
    for (int i=0; i<n; i++)
    {
        r = jogar_dado();
        //printf("%d\n", r);
        faces[r-1]++;
    }

    printf("Resultados:\n");
    for (int j=0; j<6; j++)
    {
        printf("Face %d saiu %d vezes\n", j+1, faces[j]);
    }

    return 0;
}