#include <stdio.h>
#include <stdlib.h>

float peso_M(float x){
    float Pideal = (72.7*x)-58;
}

void peso_F(float y){
    float Pideal = (62.1*y)-44.7;
    printf("O peso ideal para a altura %.2f é igual a %f", y, Pideal);
    
}


int main(){
    float altura;
    float pideal;
    char sexo;
    printf("Insira a sua altura em metros\n");
    scanf("%f", &altura);
    printf("Insira o seu sexo (M/F)\n");
    scanf("%s", &sexo);
    
    if (sexo == 'M'){
        pideal = peso_M(altura);
        printf("O seu peso ideal para altura %.2f é igual a %f", altura, pideal);
    }
    else {
        peso_F(altura);
    }
    return 0;
}