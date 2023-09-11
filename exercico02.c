#include <stdio.h>

int main() {
    int codigo;
    float valor_unitario, valor_total;
    int quantidade;

    printf("Cardapio:\n");
    printf("99 - Cachorro-quente - R$ 10.10\n");
    printf("100 - Bauru simples - R$ 8.30\n");
    printf("101 - Bauru com ovo - R$ 8.50\n");
    printf("102 - Hamburguer - R$ 12.50\n");
    printf("103 - Cheeseburguer - R$ 13.25\n");

    printf("Digite o codigo do item desejado: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 99:
            valor_unitario = 10.10;
            break;
        case 100:
            valor_unitario = 8.30;
            break;
        case 101:
            valor_unitario = 8.50;
            break;
        case 102:
            valor_unitario = 12.50;
            break;
        case 103:
            valor_unitario = 13.25;
            break;
        default:
            printf("Codigo de item invalido\n");

    }

    valor_total = valor_unitario * quantidade;

    printf("Total a ser pago: R$ %.2f\n", valor_total);

}
