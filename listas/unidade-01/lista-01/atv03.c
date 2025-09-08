#include <stdio.h>
#include <math.h>

int main()
{
    float capital;
    float taxa;
    float tempo;
    
    printf("Qual o capital que gostaria de aplicar agora? ");
    scanf("%f", &capital);
    
    printf("Em qual taxa gostaria de aplicar? ");
    scanf("%f", &taxa);
    
    printf("E em quantos anos? ");
    scanf("%f", &tempo);
    
    float montante = capital * pow((1 + (taxa/100)), tempo);
    
    printf("Ao final de %.2f anos, o montante será de %.2f", tempo, montante);
    
   return 0; 
}