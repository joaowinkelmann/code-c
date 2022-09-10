#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor_inicial, valor_final, prestacao;
    char parcelas;
    printf("Insira o valor do produto a vista\n");
    scanf("%f", &valor_inicial);
    printf("Insira o número de parcelas (3 ou 5)\n");
    scanf("%s", &parcelas);
    
    if (parcelas == '3'){
        valor_final = valor_inicial * 1.1;
        prestacao = (valor_final / 3);
    }
    else{
        valor_final = valor_inicial * 1.2;
        prestacao = (valor_final / 5);
    }
    printf("O valor final do produto será igual a %f\n", valor_final);
    printf("E o valor das parcelas será de %f\n", prestacao);
    return 0;
}