#include <stdio.h>
#include <stdlib.h>

int main(){
    int N = 0;
    float i, total;
    printf("Insira o número correspodnente a N para a operação\n");
    scanf("%d", &N);
    for(i = 1;i <= N; i++){
        total = (total + (1/i));
        printf("%f\n", (1/i));
    }
    printf("O resultado da operação foi igual a %f", total);
}