#include <stdio.h>
#include <math.h>

int main() {

    float x, y, comprimento_teia;
    int n; // número de alvos
    int alcancar_todos = 1; // verificação final

    printf("Digite a coordenada inicial do homem aranha (x y):\n");
    scanf("%f %f", &x, &y);

    printf("Digite o comprimento máximo da teia:\n");
    scanf("%f", &comprimento_teia);

    printf("Digite a quantidade de alvos:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        
        float ax, ay;

        printf("Digite as coordenadas do alvo %d (x y):\n", i);
        scanf("%f %f", &ax, &ay);

        // distância euclidiana entre o homem aranha e o alvo
        float distancia = sqrt(pow(ax - x, 2) + pow(ay - y, 2));

        // verificação se a teia alcança o alvo
        if (distancia > comprimento_teia) {
            alcancar_todos = 0; 
            break; 
        }
    }

    if (alcancar_todos) {
        printf("Consegue alcançar todos os alvos!");
    } else {
        printf("Não consegue alcançar todos os alvos!");
    }

    return 0;
}