#include <stdio.h>
#include <math.h>

int main() {

    float lado1, lado2, lado3;

    printf("Digite o valor do primeiro lado do triângulo: ");
    scanf("%f", &lado1);
    
    printf("Digite o valor do segundo lado do triângulo: ");
    scanf("%f", &lado2);
   
    printf("Digite o valor do terceiro lado do triângulo: ");
    scanf("%f", &lado3);

    // Verifica se pode formar um triângulo e, se verdadeiro, classifica quanto aos lados e ângulos
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        printf("Os valores formam um triângulo!\n");

        // Classificação quanto aos lados
        if (lado1 == lado2 && lado2 == lado3) {
            printf("É um triângulo equilátero\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("É um triângulo isósceles\n");
        } else {
            printf("É um triângulo escaleno\n");
        }

        // Classificação quanto aos ângulos
        float a = lado1, b = lado2, c = lado3;
        
        if (b > a && b > c) {
            a = b; b = a; c = c;
        } else if (c > a && c > b) {
            a = c; c = a; b = b;
        }
        
        if (a * a == b * b + c * c) {
            printf("É um triângulo retângulo\n");
        } else if (a * a < b * b + c * c) {
            printf("É um triângulo acutângulo\n");
        } else {
            printf("É um triângulo obtusângulo\n");
        }

    } else {
        printf("Os valores não formam um triângulo!\n");
    }

    return 0;
}