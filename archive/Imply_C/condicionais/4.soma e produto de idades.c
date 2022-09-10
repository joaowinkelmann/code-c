#include <stdio.h>
#include <stdlib.h>

int main(){
    int idadeh1, idadeh2, idadem1, idadem2, soma, produto;
    printf("Insira a idade do homem 1\n");
    scanf("%d", &idadeh1);
    printf("Insira a idade do homem 2\n");
    scanf("%d", &idadeh2);
    
    printf("Insira a idade da mulher 1\n");
    scanf("%d", &idadem1);
    printf("Insira a idade da mulher 2\n");
    scanf("%d", &idadem2);
    
    if (idadeh1>idadeh2){
        if(idadem1>idadem2){
            soma = idadem2 + idadeh1;
            produto = idadeh2 * idadem1;
        }
        else {
            soma = idadem1 + idadeh1;
            produto = idadeh2 * idadem2;
        }
    }
    else {
        if(idadem1>idadem2){
            soma = idadem2 + idadeh2;
            produto = idadeh1 * idadem1;
        }
        else{
            soma = idadem1 + idadeh2;
            produto = idadeh1 * idadem2;
        }
    }
    printf("Soma das idades do homem mais velho e da mulher mais nova: %d\n", soma);
    printf("Produto das idades do homem mais novo e da mulher mais velha: %d", produto);
}