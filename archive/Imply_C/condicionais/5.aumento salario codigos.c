#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo;
    float salario_inicial, salario_final;
    printf("Informe o salário do funcionário: ");
    scanf("%f", &salario_inicial);
    printf("Insira o código correspondente a profissão: ");
    scanf("%d", &codigo);
    switch (codigo){
        case 101:
            printf("O cargo de Gerente foi selecionado\n");
            salario_final = salario_inicial * 1.1;
            break;
        case 102:
            printf("O cargo de Engenheiro foi selecionado\n");
            salario_final = salario_inicial * 1.2;
            break;
        case 103:
            printf("O cargo de Técnico foi selecionado\n");
            salario_final = salario_inicial * 1.3;
            break;
        default: 
            printf("O cargo não se encontra na tabela, aplicando o aumento padrão\n");
            salario_final = salario_inicial * 1.4;
            break;
    }
    printf("Salário original: %f\n", salario_inicial);
    printf("Salário final: %f\n", salario_final);
    printf("Diferença: %f", (salario_final - salario_inicial));
}