#include <stdio.h>
#include <string.h>

int main() {
    
    int a[4][4] = {{4,1,2,3}, {5,2,1,400}, {2,1,3,8}, {7,1,2,5}};
    
    int soma=0, saida, destino;
    char cont[] = "s";
    
    printf("Cidade origem: ");
    scanf("%d", &saida);
    
    while(strcmp(cont, "s") == 0)
    {
        printf("Cidade destino: ");
        scanf("%d", &destino);
        soma += a[saida][destino];
        saida = destino;
        printf("Continuar viagem? (s/n): ");
        scanf("%s", cont);
    }
    
    printf("Total do itinerario: %d", soma);
    
    return 0;
}