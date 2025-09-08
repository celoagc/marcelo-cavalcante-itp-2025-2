#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;
    float kelvin;
    
    printf("Quantos ºC está fazendo agora? ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9/5) + 32; 
    kelvin = celsius + 273.15;
    
    printf("Transformando %.1f ºC em\nFahrenheit: %.1f °F\nKelvin: %.1f K ", celsius, fahrenheit, kelvin);
   
   return 0; 
}