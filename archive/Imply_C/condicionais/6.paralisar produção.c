#include <stdio.h>
#include <stdlib.h>

int main(){
    int grupo;
    float polui = 0;
    printf("Insira o grupo da empresa (1-3): ");
    scanf("%d", &grupo);
    printf("Agora insira o fator de poluente na empresa: ");
    scanf("%f", &polui);
    switch (grupo){
        case 1:
            if (polui> 0.45){
                printf("Paralisar produção");
            }
            else if (polui>= 0.35){
                printf("Ajustar produção");
            }
            else {
                printf("Nível aceitável");
            }
            break;
        case 2:
            if (polui> 0.4){
                printf("Paralisar produção");
            }
            else if (polui>= 0.30){
                printf("Ajustar produção");
            }
            else {
                printf("Nível aceitável");
            }
            break;
        case 3:
            if (polui> 0.35){
                printf("Paralisar produção");
            }
            else if (polui>= 0.25){
                printf("Ajustar produção");
            }
            else {
                printf("Nível aceitável");
            }
            break;
        default:
            printf("Erro: Categoria não encontrada!");
            exit(1);
    }
}