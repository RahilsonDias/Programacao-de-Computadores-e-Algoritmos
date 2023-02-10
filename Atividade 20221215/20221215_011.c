#include <stdio.h>

int main() 
{
    float nota1, nota2, nota3, media;
    float menor1, menor2, menor3, maior1, maior2, maior3, menormedia, maiormedia;
    char confirma;
    
    printf("Digite as notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
        
    media = (nota1 + nota2 + nota3)/3;

    printf("A media do aluno e: %.2f\n", media);
    
    menor1 = nota1;
    menor2 = nota2;
    menor3 = nota3;
    maior1 = nota1;
    maior2 = nota2;
    maior3 = nota3;

    menormedia = media;
    maiormedia = media;
    
    printf("Continuar? (s/n): ");
    fflush(stdin);
    scanf("%c", &confirma);
    
    while(confirma == 's')
    {
        printf("Digite as notas do aluno: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        
        media = (nota1 + nota2 + nota3)/3;
        
        printf("A media do aluno e: %.2f\n", media);

        if((nota1 < maior1) && (nota1 < menor1))
        {
            menor1 = nota1;
        }
        else
        {
            maior1 = nota1;
        }
        if((nota1 < maior1) && (nota1 < menor1))
        {
            menor2 = nota2;
        }
        else
        {
            maior2 = nota2;
        }
        if((nota1 < maior1) && (nota1 < menor1))
        {
            menor3 = nota3;
        }
        else
        {
            maior3 = nota3;
        }
        if((media < maiormedia) && (media < menormedia))
        {
            menormedia = media;
        }
        else
        {
            maiormedia = media;
        }
        printf("Continuar? (s/n): ");
        fflush(stdin);
        scanf("%c", &confirma);
    }

    printf("Menor nota do exercicio 1:%.2f\n ", menor1);
    printf("Menor nota do exercicio 2:%.2f\n ", menor2);
    printf("Menor nota do exercicio 3:%.2f\n ", menor3);
    printf("Maior nota do exercicio 1:%.2f\n ", maior1);
    printf("Maior nota do exercicio 2:%.2f\n ", maior2);
    printf("Maior nota do exercicio 3:%.2f\n ", maior3);
    printf("Menor media:%.2f\n ", menormedia);
    printf("Maior media:%.2f\n ", maiormedia);

    return 0;
}