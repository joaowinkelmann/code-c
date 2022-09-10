#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario_inicial, salario_final;
    printf("Insira o salario inicial: ");
    scanf("%f", &salario_inicial);
    salario_final = salario_inicial * 1.2;
    printf("O novo salario será de %f", salario_final);
}