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
    printf("Seu IMC é de: %.2f\n", imc);

    return 0;
}