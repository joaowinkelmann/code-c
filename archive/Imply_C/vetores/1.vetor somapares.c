#include <stdio.h>
#include <stdlib.h>

int soma_pares(int V[]){
    int soma = 0;
    int i;
    for(i=0;i<20;i++){
        if (V[i] % 2 == 0) {
            soma = soma + V[i];
        }
    }
    return soma;
}


int main(){
    int V[20];
    int i = 0;
    int soma, resultado;
    printf("Insira 20 números: \n");
    for(i=0;i<20;i++){
        scanf("%d", &V[i]);
    }
    resultado = soma_pares(V);
    printf("O resultado é igual a %d", resultado);
}