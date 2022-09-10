#include <stdio.h>
#include <stdlib.h>

int main(){
    int quant, codigo;
    int contador = 0;
    float valor = 0;
    
    printf("Importante: Entre com o número 0 no codigo para sair do programa\n");
    printf("Codigo do produto: ");
    scanf("%d", &codigo);
    
    while (codigo != 0){
        printf("Quantidade do produto %d: ", codigo);
        scanf("%d", &quant);
        switch (codigo){
            case 100:
                valor = valor + (1.2 * quant);
                printf("Valor a ser pago por %d Cachorro-quente(s): %.2f\n", quant, (1.2*quant));
                printf("Total: R$%.2f\n", valor);
                break;
            case 101:
                valor = valor + (1.3 * quant);
                printf("Valor a ser pago por %d Bauru(s) simples: %.2f\n", quant, (1.3*quant));
                printf("Total: R$%.2f\n", valor);
                break;
            case 102:
                valor = valor + (1.5 * quant);
                printf("Valor a ser pago por %d Bauru(s) com ovo: %.2f\n", quant, (1.5*quant));
                printf("Total: R$%.2f\n", valor);
                break;
            case 103:
                valor = valor + (1.2 * quant);
                printf("Valor a ser pago por %d Hambúrger(s): %.2f\n", quant, (1.2*quant));
                printf("Total: R$%.2f\n", valor);
                break;
            case 104:
                valor = valor + (1.3 * quant);
                printf("Valor a ser pago por %d Cheeseburger(s): %.2f\n", quant, (1.3*quant));
                printf("Total: R$%.2f\n", valor);
                break;
            case 105:
                valor = valor + quant;
                printf("Valor a ser pago por %d Refrigerante(s): %d,00\n", quant, (1*quant));
                printf("Total: R$%.2f\n", valor);
                break;
            default:
                printf("Erro: Código de produto não encontrado, retornando...\n");
                break;
        }
        contador = contador + quant;
        printf("Codigo do produto: ");
        scanf("%d", &codigo);
    }
        printf("---------------------------\n");
        printf("O valor final do pedido será de R$%.2f \n", valor);
        printf("Total de produtos do pedido: %d", contador);
}