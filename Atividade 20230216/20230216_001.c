#include <stdio.h>
#include <string.h>

int main() {
    char goleiro[3][10] = {"hugo", "matheus", "santos"};
    int pts_goleiro[3] = {10, 3, 8};
    
    char defesa[7][10] = {"rodigo", "leo", "david", "cleiton", "fabricio", "pablo", "joao"};
    int pts_defesa[7] = {5, 10, 8, 3, 9, 6, 7};
    
    char meio_campo[8][10] = {"everton", "arrascaeta", "vitor", "hugo", "mateus", "frança", "pedro", "marinho"};
    int pts_meio_campo[8] = {3, 6, 7, 8, 2, 10, 2, 7};
    
    char atacante[5][10] = {"Arthur", "thiago", "jose", "jefferson", "luiz"};
    int pts_atacante[5] = {6, 9, 2, 7, 10};
    
    char escalacao[11][100];
    
    int max_goleiro = 0;
    int max_goleiro_pos = 0;
    int max_defesa_1 = 0;
    int max_defesa_1_pos = 0;
    int max_defesa_2 = 0;
    int max_defesa_2_pos = 0;
    int max_defesa_3 = 0;
    int max_defesa_3_pos = 0;
    int max_defesa_4 = 0;
    int max_defesa_4_pos = 0;
    int max_meio_campo_1 = 0;
    int max_meio_campo_1_pos = 0;
    int max_meio_campo_2 = 0;
    int max_meio_campo_2_pos = 0;
    int max_meio_campo_3 = 0;
    int max_meio_campo_3_pos = 0;
    int max_meio_campo_4 = 0;
    int max_meio_campo_4_pos = 0;
    int max_atacante_1 = 0;
    int max_atacante_1_pos = 0;
    int max_atacante_2 = 0;
    int max_atacante_2_pos = 0;

    for (int i = 0; i < 3; i++) {
        if (pts_goleiro[i] > max_goleiro) {
            max_goleiro = pts_goleiro[i];
            max_goleiro_pos = i;
        }
    }
    
    for (int i = 0; i < 7; i++) {
        if (pts_defesa[i] >= max_defesa_1) {
            max_defesa_1 = pts_defesa[i];
            max_defesa_1_pos = i;
        }
    }
    for (int i = 0; i < 7; i++) {
        if ((pts_defesa[i] >= max_defesa_2) && (i != max_defesa_1_pos)) {
            max_defesa_2 = pts_defesa[i];
            max_defesa_2_pos = i;
        }
    }
    for (int i = 0; i < 7; i++) {
        if ((pts_defesa[i] >= max_defesa_3) && (i != max_defesa_1_pos) && (i != max_defesa_2_pos)) {
            max_defesa_3 = pts_defesa[i];
            max_defesa_3_pos = i;
        }
    }
    for (int i = 0; i < 7; i++) {
        if ((pts_defesa[i] >= max_defesa_4) && (i != max_defesa_1_pos) && (i != max_defesa_2_pos) && (i != max_defesa_3_pos)) {
            max_defesa_4 = pts_defesa[i];
            max_defesa_4_pos = i;
        }
    }
    
    for (int i = 0; i < 8; i++) {
        if (pts_meio_campo[i] >= max_meio_campo_1) {
            max_meio_campo_1 = pts_meio_campo[i];
            max_meio_campo_1_pos = i;
        }
    }
    for (int i = 0; i < 8; i++) {
        if ((pts_meio_campo[i] >= max_meio_campo_2) && (i != max_meio_campo_1_pos)){
            max_meio_campo_2 = pts_meio_campo[i];
            max_meio_campo_2_pos = i;
        }
    }
    for (int i = 0; i < 8; i++) {
        if ((pts_meio_campo[i] >= max_meio_campo_2) && (i != max_meio_campo_1_pos) && (i != max_meio_campo_2_pos)){
            max_meio_campo_3 = pts_meio_campo[i];
            max_meio_campo_3_pos = i;
        }
    }
    for (int i = 0; i < 8; i++) {
        if ((pts_meio_campo[i] >= max_meio_campo_2) && (i != max_meio_campo_1_pos) && (i != max_meio_campo_2_pos) && (i != max_meio_campo_3_pos)){
            max_meio_campo_3 = pts_meio_campo[i];
            max_meio_campo_3_pos = i;
        }
    }
    
    for (int i = 0; i < 5; i++) {
        if (pts_atacante[i] >= max_atacante_1) {
            max_atacante_1 = pts_atacante[i];
            max_atacante_1_pos = i;
        }
    }
    for (int i = 0; i < 5; i++) {
        if ((pts_atacante[i] >= max_atacante_2) && (i != max_atacante_1_pos)) {
            max_atacante_2 = pts_atacante[i];
            max_atacante_2_pos = i;
        }
    }
    
    strcpy(escalacao[0], goleiro[max_goleiro_pos]);
    strcpy(escalacao[1], defesa[max_defesa_1_pos]);
    strcpy(escalacao[2], defesa[max_defesa_2_pos]);
    strcpy(escalacao[3], defesa[max_defesa_3_pos]);
    strcpy(escalacao[4], defesa[max_defesa_4_pos]);
    strcpy(escalacao[5], meio_campo[max_meio_campo_1_pos]);
    strcpy(escalacao[6], meio_campo[max_meio_campo_2_pos]);
    strcpy(escalacao[7], meio_campo[max_meio_campo_3_pos]);
    strcpy(escalacao[8], meio_campo[max_meio_campo_4_pos]);
    strcpy(escalacao[9], atacante[max_atacante_1_pos]);
    strcpy(escalacao[10], atacante[max_atacante_2_pos]);
    
    printf("Escalacao\n");
    printf("\n");
    printf("##Goleiro##\n");
    printf("%s\n", escalacao[0]);
    printf("\n");
    printf("##Defesa##\n");
    for(int i=1; i<5; i++){
        printf("%s\n", escalacao[i]);
    }
    printf("\n");
    printf("##Meio-campo##\n");
    for(int i=5; i<9; i++){
        printf("%s\n", escalacao[i]);
    }
    printf("\n");
    printf("##Ataque##\n");
    for(int i=9; i<11; i++){
        printf("%s\n", escalacao[i]);
    }
    
    return 0;
}