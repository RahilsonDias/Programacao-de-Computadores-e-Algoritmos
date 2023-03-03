#include <stdio.h>
#include <string.h>

void MaisMulheres(char sexo[2][7][1]){
    int mulheres_e1 = 0, mulheres_e2 = 0;
    
    for(int i=0; i<6; i++){
        if(sexo[0][0][i] == 'f'){
            mulheres_e1 += 1;
            
        }
    }
    for(int i=0; i<6; i++){
        if(sexo[1][0][i] == 'f'){
            mulheres_e2 += 1;
        }
    }
    
    printf("--Equipe com a maior quantidade de mulheres--\n");
    if(mulheres_e1 > mulheres_e2){
        printf("Equipe com a maior quantidade de mulheres: Equipe 1\n");
    }
    else{
        printf("Equipe com a maior quantidade de mulheres: Equipe 2\n");
    }
}

void SelecaoProjeto(char estudantes[2][7][20], char sexo[2][7][1], float notas[2][7][1]){
    char selecionadas[15][20];
    int j=0;
    
    printf("--Selecao de alunas para projeto--\n");
    printf("Alunas selecionadas para o projeto: \n");
    for(int i=0; i<6; i++){
        if(sexo[0][0][i] == 'f' && notas[0][0][i] >= 8.0){
            strcpy(selecionadas[j], estudantes[0][i]);
            j++;
        }
    }
    for(int i=0; i<6; i++){
        if(sexo[1][0][i] == 'f' && notas[1][0][i] >= 8.0){
            strcpy(selecionadas[j], estudantes[1][i]);
            j++;
        }
    }
    
    for(int i=0; i<strlen(selecionadas)-1; i++){
        printf("%s\n", selecionadas[i]);
    }
}

void PontoExtra(char estudantes[2][7][20], float notas[2][7][1]){
    printf("--Adicionando ponto extra para a equipe 2--\n");
    printf("Ponto extra adicionado! Novas notas: \n");
    for(int i=0; i<6; i++){
        if(notas[1][0][i] < 10){
            notas[1][0][i] += 1;
        }
        printf("%s: %.1f\n", estudantes[1][i], notas[1][0][i]);
    }
}

void AdicionarAluno(char estudantes[2][7][20], char sexo[2][7][1], float notas[2][7][1]){
    char novo_est[20];
    char novo_sexo;
    float nova_nota;
    int equipe;
    
    printf("--Adicionando novo estudante--\n");
    printf("Nome do novo estudante: ");
    scanf("%s", novo_est);
    printf("Sexo do novo estudante: ");
    scanf(" %c", &novo_sexo);
    printf("Nota do novo estudante: ");
    scanf("%f", &nova_nota);
    printf("Equipe Destino (1 ou 2): ");
    scanf("%d", &equipe);
    printf("\n");

    strcpy(estudantes[equipe-1][6], novo_est);
    sexo[equipe-1][0][6] = novo_sexo;
    notas[equipe-1][0][6] = nova_nota;
    
    printf("Nova formação da equipe %d:\n", equipe);
    for(int i=0; i<7; i++){
        printf("%s (%c): %.1f\n", estudantes[equipe-1][i], sexo[equipe-1][0][i], notas[equipe-1][0][i]);
    }
    
}

int main() {
    char estudantes[2][7][20] = {
        {"Maria", "Joana", "Alana", "Pedro", "João", "Milena", ""},
        {"Carlos", "Ana", "Selena", "Sergio", "Alex", "Mario", ""}
    };
    char sexo[2][7][1] = {
        {'f', 'f', 'f', 'm', 'm', 'f', 'n'},
        {'m', 'f', 'f', 'm', 'm', 'm', 'n'}
    };
    float notas[2][7][1] = {
        {8, 9, 3, 4, 6, 5, 0},
        {2, 8, 10, 6, 5, 7, 0}
    };
    
    MaisMulheres(sexo);
    printf("\n");
    SelecaoProjeto(estudantes, sexo, notas);
    printf("\n");
    PontoExtra(estudantes, notas);
    printf("\n");
    AdicionarAluno(estudantes, sexo, notas);
    printf("\n");
    return 0;
}
