#include <stdio.h>
#include <stdlib.h>

int main(){
    float altura;
    float pideal;
    char sexo;
    printf("Insira a sua altura em metros\n");
    scanf("%f", &altura);
    printf("Insira o seu sexo (M/F)\n");
    scanf("%s", &sexo);
    
    if (sexo == 'M'){
        pideal = (72.7*altura)-58;
    }
    else {
        pideal = (62.1*altura)-44.7;
    }
    
    printf("O seu peso ideal para altura %f e sexo %s eh igual a\n %f", altura, &sexo, pideal);
    return 0;
}