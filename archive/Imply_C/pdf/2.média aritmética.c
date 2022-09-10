#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, media;
    printf("Insira a nota 1: ");
    scanf("%f", &nota1);
    printf("Insira a nota 2: ");
    scanf("%f", &nota2);
    printf("Insira a nota 3: ");
    scanf("%f", &nota3);
    
    media = ((nota1+nota2+nota3)/3);
    printf("A média artitmética entre as 3 notas é igual a %f", media);
}