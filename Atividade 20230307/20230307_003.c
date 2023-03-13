#include <stdio.h>

int main()
{
    int i = 10;
    int *ptrint = &i;
    
    float f = 0.10;
    float *ptrfloat = &f;
    
    char c ='a';
    char *ptrchar = &c;
    
    printf("--Antes de mudar--\n");
    printf("Inteiro %i\n", *ptrint);
    printf("Real %f\n",  *ptrfloat);
    printf("Char %c\n", *ptrchar);
    
   *ptrint = 20;
   *ptrfloat = 0.20;
   *ptrchar = 'b';

    printf("--Depois de mudar--\n");
    printf("Inteiro %i\n", *ptrint);
    printf("Real %f\n",  *ptrfloat);
    printf("Char %c\n", *ptrchar);
    
    return 0;
}