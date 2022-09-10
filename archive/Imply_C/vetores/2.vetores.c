#include <stdio.h>
#include <stdlib.h>

int Maior(int V[]){
    int i;
    int resulto = 0;
    for (i=0;i<10;i++){
        if (V[i]>resulto){
            resulto = V[i];
        }
    }
    return resulto;
}

int Menor(int V[]){
    int i;
    int result = 9999;
    for (i=0;i<10;i++){
        if (V[i]<result){
            result = V[i];
        }
    }
    return result;
}

int SMedia(int V[], int Med){
   int i;
   int resulte = 0;
    for (i=0;i<10;i++){
        if (V[i]> Med){
            resulte++;
        }
    }
    return resulte;
}


int main(){
    int V[10];
    int i, maior, menor, media, maior_media;
    int soma = 0;
    printf("Insira 10 valores para serem armazenados no vetor: \n");
    for(i=0;i<10;i++){
        scanf("%d", &V[i]);
        soma = soma + V[i];
    }
    
    media = (soma/10);
    
    maior = Maior(V);
    menor = Menor(V);
    
    maior_media = SMedia(V, media);
    
    printf("O maior valor é igual a %d\n", maior);
    printf("E o menor valor é igual a %d\n", menor);
    printf("%d valores são maiores que a média", maior_media);
}