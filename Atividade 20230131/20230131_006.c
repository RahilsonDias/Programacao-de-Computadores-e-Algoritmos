#include <stdio.h>
#include <string.h>

void Palindromo(char str[])
{
    int i=0, j=strlen(str), pld=0;

    while(i < strlen(str))
    {
        if(str[i] == str[j-1])
        {
            pld++;
            i++;
            j--;
        }
        else
        {
            i++;
            j--;
        }
    }
    
    if(pld == strlen(str))
    {
        printf("A string eh um palindromo");
    }
    else
    {
        printf("A string nao eh um palindromo");
    }
}


int main() {
    char str[50];
    int opcao=0;
    
    printf("String: ");
    scanf("%s", str);
    
    Palindromo(str);

    return 0;
}