#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[10];
    float alt[10];
    int i, nmaior, nmenor;
    float menor = 9999999;
    float maior = 0;
    for (i=0; i<9;i++){
        printf("Insira o número do aluno %d: ", i);
        scanf("%d", &num[i]);
        printf("Entre com a altura do aluno %d em metros: ", i);
        scanf("%f", &alt[i]);
    }
    
    for (i=0; i<9;i++){
        if (alt[i] > maior){
            maior = alt[i];
            nmaior = num[i];
        }
        if (alt[i] < menor){
            menor = alt[i];
            nmenor = num[i];
        }
    }
    printf("\nCódigo do maior aluno: %d\n", nmaior);
    printf("Altura do maior aluno: %f\n", maior);
    printf("--------------------------\n");
    printf ("Código do menor aluno: %d\n", nmenor);
    printf("Altura do menor aluno: %f", menor);
}