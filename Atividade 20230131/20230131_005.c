#include <stdio.h>
#include <string.h>

void CodCesar(char str[])
{
    printf("\nString codificada: ");
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i] != ' ')
        {
            printf("%c", str[i] + 3);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}


int main() {
    char str[50];
    int opcao=0;
    
    printf("String: ");
    gets(str);
    
    CodCesar(str);

    return 0;
}