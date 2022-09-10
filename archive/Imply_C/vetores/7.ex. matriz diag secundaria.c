#include <stdio.h>

float Diag_sec (float M[][5]);

int main() {
        float M[5][5], X;
    int i, j;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
printf(“Digite um número”);
            scanf(“%f”, &M[i][j]);
}
}

X = Diag_sec(M);  //chamado a função

for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf(“%f\t”, M[i][j]);
        }
        printf(“\n”);
    }

printf(“\nA soma dos elementos da diagonal secundária é: %f”, X);

}

float Diag_sec (float M[][5]){
    int i, j;
float soma=0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i+j==4)
                soma = soma + M[i][j];
        }
    }
    return soma;
}

