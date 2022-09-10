#include <stdio.h>
#include <stdlib.h>

int main(){
   int idade, cont=0;
   float alt, media, somalt=0;
   
   printf("Digite a idade: ");

   scanf("%d", &idade);
   
   while (idade!=0){
       printf("Digite a altura: ");
       scanf("%f", &alt);
       if(idade>50){
           somalt = somalt + alt;  //acumulador
           cont = cont + 1;  //contador
       }
        printf("Digite a idade: ");
        scanf("%d", &idade);
   }
   media = somalt/cont;
   printf("Quantidade de pessoas com mais de 50 anos: %d \nA media das alturas das pessoas com mais de 50 anos é: %.2f", cont, media);
}