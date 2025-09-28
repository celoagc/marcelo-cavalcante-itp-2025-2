#include <stdio.h>

int main() {

    float compra, desconto, valorFinal;

    printf("Qual o valor da sua compra? R$");
    scanf("%f", &compra);

    if (compra > 1000) {
        desconto = compra * 0.2;
        valorFinal = compra - desconto;
        printf("O valor final da compra com o desconto de R$%.2f é R$%.2f\n", desconto, valorFinal);
    } else if (compra > 500 && compra <= 1000) {
        desconto = compra * 0.15;
        valorFinal = compra - desconto;
        printf("O valor final da compra com o desconto de R$%.2f é R$%.2f\n", desconto, valorFinal);
    } else if (compra > 100 && compra <= 500) {
        desconto = compra * 0.1;
        valorFinal = compra - desconto;
        printf("O valor final da compra com o desconto de R$%.2f é R$%.2f\n", desconto, valorFinal);
    } else {
        printf("O valor da compra é R$%.2f e não há desconto.\n", compra);
    }

    return 0;
}