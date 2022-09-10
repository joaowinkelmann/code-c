#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario_inicial, percentual, salario_final;
    printf("Insira o salario inicial: ");
    scanf("%f", &salario_inicial);
    printf("Insira o percentual de aumento: ");
    scanf("%f", &percentual);
    salario_final = salario_inicial * (1 + (percentual*0.01));
    printf("O novo salario será de %f", salario_final);
}