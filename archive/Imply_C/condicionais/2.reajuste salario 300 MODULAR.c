#include <stdio.h>
#include <stdlib.h>

float sal_A(float sal){
    float aux;
    aux = sal * 1.35;
    return aux;
}

void sal_B(float sal){
    float aux;
    aux = sal * 1.15;
    printf("O novo salário será igual a %f", aux);
}

int main(){
    float salario_inicial, salario_final;
    printf("Insira o salário do funcionário\n");
    scanf("%f", &salario_inicial);
    
    if (salario_inicial <= 300) {
        salario_final = sal_A(salario_inicial);
        printf("O salário final será de %lf", salario_final);
    }
    else {
        sal_B(salario_inicial);
    }
}


