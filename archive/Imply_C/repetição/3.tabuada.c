#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i = 0;
    printf("Entre com um número para saber a sua tabuada: ");
    scanf("%d", &num);
    
    for(i=1; i<=10; i++){
        printf("%dx%d = %d\n", num, i, (num*i));
    }
}