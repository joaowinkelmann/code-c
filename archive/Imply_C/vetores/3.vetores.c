#include <stdio.h>
#include <stdlib.h>

void RetornaPosPar(float V[]){
    int i;
    for(i=0;i<30;i++){
        if((i % 2) == 0){
            printf("%f\n", V[i]);
        }
    }
}


int main(){
    float Vet[30];
    int i;
    printf("Insira o valor de 30 floats");
    for (i=0;i<30;i++){
        scanf("%f", &Vet[i]);
    }
    printf("\n==========================\n");
    RetornaPosPar(Vet);
}