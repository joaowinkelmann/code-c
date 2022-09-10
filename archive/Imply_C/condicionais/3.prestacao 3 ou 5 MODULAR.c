#include <stdio.h>
#include <stdlib.h>

void tresparc(float val){
    float res, parcelas;
    res = val * 1.1;
    parcelas = (res/3);
    printf("O valor final do produto será de %f\n", res);
    printf("E o valor das parcelas será de %f", parcelas);
}

float cincoparc(float val){
    float res, parcelas;
    res = val * 1.2;
    parcelas = (res/5);
    printf("A prestacao será igual a %f", parcelas);
    return res;
}

int main(){
    float valor_inicial, valor_final, prestacao;
    char parcelas;
    printf("Insira o valor do produto a vista\n");
    scanf("%f", &valor_inicial);
    printf("Insira o número de parcelas (3 ou 5)\n");
    scanf("%s", &parcelas);
    
    if (parcelas == '3'){
        tresparc(valor_inicial);
    }
    else if (parcelas == '5'){
        valor_final = cincoparc(valor_inicial);
        printf("O valor final do produto será igual a %f\n", valor_final);
    }
    else{
        printf("Quantidade de parcelas não encontrada no sistema");
    }
    return 0;
}