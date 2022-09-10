#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario_inicial, salario_final;
    printf("Insira o salário do funcionário\n");
    scanf("%f", &salario_inicial);
    
    if (salario_inicial <= 300) {
        salario_final = salario_inicial * 1.35;
    }
    else {
        salario_final = salario_inicial * 1.15;
    }
    printf("O salário final será de %lf", salario_final);
}