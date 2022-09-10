#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3, num4;
    printf("Insira 3 números inteiros em ordem crescente:\n");
    printf("Número 1: ");
    scanf("\n%d", &num1);
    printf("Número 2: ");
    scanf("\n%d", &num2);
    if (num1> num2){
        printf("Número inválido!");
        exit(1);
    }
    printf("Número 3: ");
    scanf("\n%d", &num3);
    if (num2> num3){
        printf("Número inválido!");
        exit(1);
    }
    printf("Agora insira outro número inteiro qualquer: ");
    scanf("\n%d", &num4);
    
    printf("Números em ordem decrescente:\n");
    if (num4 > num3){
        printf("%d, %d, %d, %d", num4, num3, num2, num1);
    }
    else if (num4 > num2){
        printf("%d, %d, %d, %d", num3, num4, num2, num1);
    }
    else if (num4 > num1) {
        printf("%d, %d, %d, %d", num3, num2, num4, num1);
    }
    else{
        printf("%d, %d, %d, %d", num3, num2, num1, num4);
    }
    return 0;
}