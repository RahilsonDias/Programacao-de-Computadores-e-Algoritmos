#include <stdio.h>
#include <string.h>

void SepararData(char data[])
{
    char numdata[5];    // Extract the first token
    char * token = strtok(data, "/");
    // loop through the string to extract all other tokens
    while(token != NULL) {
        printf("%s\n", token); //printing each token
        token = strtok(NULL, "/");
   }
}

int main() {
    char data[100];
    int validador=0;
    int dataValida=0;
    
    printf("Data: ");
    scanf("%s", &data);
    
    while(dataValida == 0)
    {
        for(int i=0; i<sizeof(data); i++)
        {
            if((data[i] >= '0' && data[i] <= '9') || (data[i] == '/'))
            {
                validador++;
            }
        }
        
        if((validador == 10) && (data[2] == '/') && (data[5] == '/'))
        {
            dataValida = 1;
            SepararData(data);
        }
        else
        {
            dataValida = 0;
            printf("Data invalida\n");
            printf("Data: ");
            scanf(" %s", &data);
        }
    }
    
    return 0;
}