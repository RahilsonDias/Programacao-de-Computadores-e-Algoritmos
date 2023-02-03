#include <stdio.h>
#include <string.h>

void Inverter(char str[])
{
    //printf("%d\n", strlen(str));
    for(int i=strlen(str); i>0; i--)
    {
        printf("%c", str[i-1]);
    }
}

void RemoveVogal(char str[])
{
    for(int i=0; i<strlen(str); i++)
    {
        if ((str[i] != 'a') && (str[i] != 'e') && (str[i] != 'i') && (str[i] != 'o') && (str[i] != 'u') && (str[i] != 'A') && (str[i] != 'E') && (str[i] != 'I') && (str[i] != 'O') && (str[i] != 'U'))
        {
            printf("%c", str[i]);
        }
    }
}

void Maiuscula(char str[])
{
    for(int i=0; i<strlen(str); i++)
    {
        if ((str[i] >= 'a') && (str[i] <= 'z'))
        {
            printf("%c", /*str[i] - 32*/ toupper(str[i]));
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}

void ProcuraChar(char str[], char c)
{
    int ocorrencia=0;
    
    for(int i=0; i<strlen(str); i++)
    {
        if (str[i] == c)
        {
            ocorrencia++;
        }
    }
    
    printf("Ocorrencias do char '%c' na string: %d", c, ocorrencia);
}

void RemoveChar(char str[], char c)
{
    
    for(int i=0; i<strlen(str); i++)
    {
        if (str[i] != c)
        {
            printf("%c", str[i]);
        }
    }
}

int main() {
    char str[100];
    char ch;
    
    printf("String: ");
    scanf("%s", &str);
    
    printf("Char: ");
    scanf(" %c", &ch);
    
    printf("\nString invertida: ");
    Inverter(str);
    
    printf("\nString sem vogal: ");
    RemoveVogal(str);
    
    printf("\nString maiuscula: ");
    Maiuscula(str);
    
    printf("\n");
    ProcuraChar(str, ch);
    
    printf("\nString sem o char '%c': ", ch);
    RemoveChar(str, ch);

    return 0;
}