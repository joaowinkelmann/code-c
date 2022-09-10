#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, tempo, imposto, liquido = 0;
    int grati = 0;
    char categoria;
    printf("Insira o salário base a ser calculado: ");
    scanf("%f", &salario);
    printf("Agora insira o tempo de serviço do funcionário (em anos): ");
    scanf("%f", &tempo);
    printf("\n");
    
    //Seção imposto
    if (salario >= 700){
        imposto = salario * 0.12;
    }
    else if (salario > 450){
        imposto = salario * 0.08;
    }
    else if (salario >= 200){
        imposto = salario * 0.03;
    }
    else {
        imposto = 0;
    }
    
    //Seção gratificação
    if (salario > 500){
        if (tempo > 3){
            grati = 30;
        }
        else{
            grati = 20;
        }
    }
    else {
        if (tempo >= 6){
            grati = 33;
        }
        else if (tempo >= 3){
            grati = 35;
        }
        else {
            grati = 23;
        }
    }
    
    //Seção salario liquido
    liquido = salario - imposto + grati;
    
    if (liquido > 600){
        categoria = 'C';
    }
    else if (liquido > 350){
        categoria = 'B';
    }
    else {
        categoria = 'A';
    }
    
    printf("O imposto a ser cobrado do funcionário é igual a: %f", imposto);
    printf("\nO salário liquido do funcionario é igual a: %f", liquido);
    printf("\nA gratificação do funcionario é igual a: %d", grati);
    printf("\nA categoria do funcionário é a de Categoria %c", categoria);
    
}