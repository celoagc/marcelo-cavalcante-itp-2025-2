#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua média é de %.1f e você está ", media);
    if (media >= 7.0) {
        printf("aprovado!\n");
    } else if (media >= 4.0) {
        printf("em recuperação!\n");
    } else {
        printf("reprovado!\n");
    }

    return 0;
}