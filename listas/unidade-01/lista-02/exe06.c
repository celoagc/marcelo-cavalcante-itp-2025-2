#include <stdio.h>

int main() {

    char febre, dorCabeca, dorCorpo, tosse;
    printf("O que você está sentindo agora?\n");

    printf("Tem febre?\nResponda [S/N] para SIM ou NÃO:\n");
    scanf(" %c", &febre);

    printf("Tem dor de cabeça?\nResponda [S/N] para SIM ou NÃO:\n");
    scanf(" %c", &dorCabeca);

    printf("Tem dor no corpo?\nResponda [S/N] para SIM ou NÃO:\n");
    scanf(" %c", &dorCorpo);

    printf("Tem tosse?\nResponda [S/N] para SIM ou NÃO:\n");
    scanf(" %c", &tosse);

    if ((febre == 'S' || febre == 's') && (dorCabeca == 'S' || dorCabeca == 's') && (dorCorpo == 'S' || dorCorpo == 's')) {
        printf("Você possivelmente está com gripe.\n");
    } else if ((febre == 'S' || febre == 's') && (tosse == 'S' || tosse == 's')) {
        printf("Você possivelmente está com resfriado.\n");
    } else if ((dorCabeca == 'S' || dorCabeca == 's')) {
        printf("Você possivelmente está com enxaqueca.\n");
    } else if ((febre == 'S' || febre == 's')) {
        printf("Consulte um médico.\n");
    } else if ((febre == 'N' || febre == 'n') && (dorCabeca == 'N' || dorCabeca == 'n') && (dorCorpo == 'N' || dorCorpo == 'n') && (tosse == 'N' || tosse == 'n')) {
        printf("Você parece estar bem!\n");
    } else {
        printf("Consulte um médico.\n");
    }

    return 0;
}