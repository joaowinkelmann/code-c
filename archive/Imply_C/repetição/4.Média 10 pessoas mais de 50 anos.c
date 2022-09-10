#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, idade, contador = 0;
    float altura, media, somalt = 0;
    
    printf("Entre com a idade e altura de 10 pessoas: \n");
    for(i=1;i <= 10;i++){
        printf("Insira a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        printf("Insira a altura da pessoa %d: ", i);
        scanf("%f", &altura);
        if (idade>50){
            somalt = somalt + altura;
            contador++;
        }
    }
media = (somalt/contador);
printf("Média da altura das pessoas com mais de 50 anos: %f", media);
}