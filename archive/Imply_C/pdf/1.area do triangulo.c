#include <stdio.h>
#include <stdlib.h>

int main(){
    float altura, base, area;
    printf("Insira o valor da base do triângulo: ");
    scanf("%f", &base);
    printf("Insira o valor da altura do triângulo: ");
    scanf("%f", &altura);
    area = ((base*altura)/2);
    printf("A área do triângulo será igual a %f", area);
}