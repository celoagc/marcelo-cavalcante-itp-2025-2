#include <stdio.h>
#include <math.h>

int main() {
    
    float consumo;
    char tipo;
    
    printf("Qual é o tipo da sua unidade consumidora: residencial, comercial ou industrial?\n");
    printf("Digite\n[R] para residencial,\n[C] para comercial ou\n[I] para industrial: \n");
    scanf(" %c", &tipo);

    printf("Digite o consumo em kWh: \n");
    scanf("%f", &consumo);

    float residencial = (0.6 * consumo) + 15;
    float comercial = (0.48 * consumo) + 15;
    float industrial = (1.29 * consumo) + 15;

    if (tipo == 'R' || tipo == 'r') {
        printf("O valor a ser pago é: %.2f\n", residencial);
    } else if (tipo == 'C' || tipo == 'c') {
        printf("O valor a ser pago é: %.2f\n", comercial);
    } else if (tipo == 'I' || tipo == 'i') {
        printf("O valor a ser pago é: %.2f\n", industrial);
    } else {
        printf("Tipo de unidade consumidora inválido.\n");
    }

    return 0;
}