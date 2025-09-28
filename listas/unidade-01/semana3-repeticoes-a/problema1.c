#include <stdio.h>

int main() {

    float comprimento, largura, bolso;
    int dobras = 0;

    printf("Digite o comprimento da folha:\n");
    scanf("%f", &comprimento);

    printf("Digite a largura da folha:\n");
    scanf("%f", &largura);

    printf("Digite o comprimento do bolso:\n");
    scanf("%f", &bolso);

    while (comprimento > bolso && largura > bolso) {
        
        if (comprimento > largura) {
            comprimento /= 2;
        } else {
            largura /= 2;
        }
        
        dobras++;
        
    }

    printf("A folha será dobrada %d vezes!\n", dobras);

    return 0;
}