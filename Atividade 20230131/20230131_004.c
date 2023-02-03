#include <stdio.h>
#include <string.h>

void Tamanho(char str[])
{
    printf("Tamanho da string: %ld\n", strlen(str));
}

void Inverter(char str[])
{
    printf("\nString invertida: ");
    for(int i=strlen(str); i>0; i--)
    {
        printf("%c", str[i-1]);
    }
}

void ProcuraChar(char str[])
{
    char c;
    int ocorrencia=0;
    
    printf("Char: ");
    scanf(" %c", &c);
    
    for(int i=0; i<strlen(str); i++)
    {
        if (str[i] == c)
        {
            ocorrencia++;
        }
    }
    
    printf("Ocorrencias do char '%c' na string: %d", c, ocorrencia);
}

void TrocaChar(char str[])
{
    char c1;
    char c2;
    
    printf("Char 1: ");
    scanf(" %c", &c1);
    printf("Char 2: ");
    scanf(" %c", &c2);
    
    for(int i=0; i<strlen(str); i++)
    {
        if (str[i] == c1)
        {
            str[i] = c2;
        }
    }
    printf("String com o primeiro '%c' trocado por '%c': %s", c1, c2, str);
}

void Comparar(char str[])
{
    char str2[50];
    
    printf("String 2: ");
    scanf("%s", &str2);
    
    if(strcmp(str, str2) < 0)
    {
        printf("'%s' tem valor menor que '%s'", str, str2);
    }
    if(strcmp(str, str2) == 0)
    {
        printf("'%s' tem valor igual a '%s'", str, str2);
    }
    if(strcmp(str, str2) > 0)
    {
        printf("'%s' tem valor menor que '%s'", str2, str);
    }
    
}

void Concatenar(char str[])
{
    char str2[50];
    char str3[100];
    
    printf("String 2: ");
    scanf("%s", &str2);
    
    strcpy(str3, str);
    strcat(str3, str2);
    
    printf("Resultado da concatenação: %s", str3);
}

void VerificaSubstring(char str[])
{
    char str2[50];
    int cont=0;
    
    printf("String 2: ");
    scanf("%s", &str2);
    
    for(int i=0; i<strlen(str2); i++)
    {
        if (str2[i] == str[i])
        {
            cont++;
        }
        else
        {
            cont = 0;
        }
    }
    if(cont == strlen(str2))
    {
        printf("'%s' eh substring de '%s'", str2, str);
    }
    else
    {
        printf("'%s' nao eh substring de '%s'", str2, str);
    }
}

void CriaSubstring(char str[])
{
    char str2[50];
    int pos=0, tam=0;
    
    printf("Posicao inicial: ");
    scanf("%d", &pos);
    printf("Tamanho da substring: ");
    scanf("%d", &tam);
    
    printf("Substring resultante: ");
    for(int i=pos-1; i<tam; i++)
    {
        printf("%c", str[i]);
    }
}

int main() {
    char str[50];
    int opcao=0;
    
    printf("String: ");
    scanf("%s", &str);
    
    printf("Menu\n");
    printf("Tamanho da string (1)\n");
    printf("Inverter a string (2)\n");
    printf("No. de ocorrencias de um char na string (3)\n");
    printf("Trocar a primeira ocorrencia de um char para outro char (4)\n");
    printf("Comparar essa string com outra string (5)\n");
    printf("Concatenar essa string com outra string (6)\n");
    printf("Verificar se uma outra string eh substring desta string (7)\n");
    printf("Criar uma substring a partir desta string (8)\n");
    printf("O que voce deseja?\n");
    scanf("%d", &opcao);
    
    if(opcao == 1)
    {
        Tamanho(str);
    }
    if(opcao == 2)
    {
        Inverter(str);
    }
    if(opcao == 3)
    {
        ProcuraChar(str);
    }
    if(opcao == 4)
    {
        TrocaChar(str);
    }
    if(opcao == 5)
    {
        Comparar(str);
    }
    if(opcao == 6)
    {
        Concatenar(str);
    }
    if(opcao == 7)
    {
        VerificaSubstring(str);
    }
    if(opcao == 8)
    {
        CriaSubstring(str);
    }

    return 0;
}