#include <stdio.h>

int main()
{
    int num1, num2; 
    float res;
    
    printf("Digite um número: ");
    scanf("%d", &num1);
    
    printf("Digite outro número: ");
    scanf("%d", &num2);
    
    res = num1 + num2;
    printf("A soma de %d + %d é de: %.0f\n", num1, num2, res);
    
    res = num1 - num2;
    printf("A diferença de %d - %d é de: %.0f\n", num1, num2, res);
    
    res = num1 * num2;
    printf("O produto de %d * %d é de: %.0f\n", num1, num2, res);
    
    res = (float)num1 / num2;
    printf("A divisão de %d / %d é de: %.1f\n", num1, num2, res);
    
    res = num1 % num2;
    printf("O resto de %d por %d é de: %.0f\n", num1, num2, res);
    
   return 0; 
}