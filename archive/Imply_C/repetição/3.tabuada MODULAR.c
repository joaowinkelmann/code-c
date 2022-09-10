#include <stdio.h>
#include <stdlib.h>

void tab(int x){
    int i;
    for (i=1; i<=10; i++){
        printf("%dx%d = %d\n", x, i, (x*i));
    }
}

int main(){
    int num, i = 0;
    printf("Entre com um número inteiro para saber a sua tabuada: ");
    scanf("%d", &num);
    tab(num);
}