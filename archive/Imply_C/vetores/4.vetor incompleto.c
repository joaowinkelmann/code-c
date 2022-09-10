#include <stdio.h>
#include <stdlib.h>

float inverter(float V[]){
    int i;
    for(i=0;i<9;i++){
        V[i] = V[(9-i)];
    }
    return V[10];
}

int main(){
    float N[10];
    float Inv[10];
    int i;
    printf("Insira 10 valores reais para preencher o vetor N: ");
    for(i=0;i<9;i++){
        printf("Valor %d: ", (i+1));
        scanf("%f", &N[i]);
    }
    Inv[10] = inverter(N);
    
    for(i=0;i<9;i++){
        printf("Valor %d: ", i);
        printf("%f\n", Inv[i]);
    }
}