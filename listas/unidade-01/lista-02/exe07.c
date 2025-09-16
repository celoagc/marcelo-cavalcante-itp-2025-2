#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, delta, raiz1, raiz2;

    printf("Digite o coeficiente [a] (diferente de 0): ");
    scanf("%f", &a);

    printf("Digite o coeficiente [b]: ");
    scanf("%f", &b);

    printf("Digite o coeficiente [c]: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (a == 0) {
        printf("O coeficiente [a] deve ser diferente de zero.\n");
    } else if (delta > 0) {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raízes reais distintas: x1 = %.2f e x2 = %.2f\n", raiz1, raiz2);
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);
        printf("Uma raiz real: x = %.2f\n", raiz1);
    } else {
        printf("Não possui raízes reais.\n");
    }

    return 0;
}