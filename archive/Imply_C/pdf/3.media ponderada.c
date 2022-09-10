#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, peso1, peso2, peso3, media;
    printf("Insira a nota 1: ");
    scanf("%f", &nota1);
    printf("Insira o peso da nota 1: ");
    scanf("%f", &peso1);
    printf("Insira a nota 2: ");
    scanf("%f", &nota2);
    printf("Insira o peso 2: ");
    scanf("%f", &peso2);
    printf("Insira a nota 3: ");
    scanf("%f", &nota3);
    printf("Insira o peso 3: ");
    scanf("%f", &peso3);
    
    media = ((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/(peso1+peso2+peso3);
    printf("A média artitmética entre as 3 notas é igual a %f", media);
}