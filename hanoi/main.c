//Maior peça -> "3"
//Menor peça -> "1";

#include <stdio.h>
#include <stdlib.h>
#define MAX_TORRE 3

int main(void){
    int torre1[MAX_TORRE];
    int torre2[MAX_TORRE];
    int torre3[MAX_TORRE];
    int i;

    for(i=0; i < (MAX_TORRE);i++){
        torre1[i] = i + 1;
        torre2[i] = 0;
        torre3[i] = 0;
    }

    printf("Torre 1\tTorre 2\tTorre 3\n");
    for(i=0;i < MAX_TORRE; i++){
        printf("%d", torre1[i]);
        printf("\t%d", torre2[i]);
        printf("\t%d\n", torre3[i]);
    }
}
