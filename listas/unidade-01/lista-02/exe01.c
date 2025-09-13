#include <stdio.h>
#include <math.h>

int main()
{
    float peso; 
    float altura;
    float imc;
    
    printf("Qual o seu peso em quilogramas? \n");
    scanf("%f", &peso);

    printf("Qual a sua altura em metros? \n");
    scanf("%f", &altura);
    
    imc = peso / pow(altura, 2);
    printf("Seu IMC é de: %.2f e está classificado como ", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Peso normal\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Sobrepeso\n");
    } else if (imc >= 30) {
        printf("Obesidade\n");
    }

    return 0;
}