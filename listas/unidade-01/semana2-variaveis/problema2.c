#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;
    float kelvin;

    printf("Quantos ºC está fazendo agora?\n");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9/5) + 32; 
    kelvin = celsius + 273.15;

    printf("Transformando %.1f ºC em\n1. Fahrenheit: %.1f °F\n2. Kelvin: %.1f K\n", celsius, fahrenheit, kelvin);

   return 0;
}