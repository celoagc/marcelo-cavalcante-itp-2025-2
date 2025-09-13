#include <stdio.h>

int main() { 

    char jogador1, jogador2;

    printf("Vamos jogar pedra, papel e tesoura?\n");
    
    printf("Jogador 01, escolha uma opção:\n[P] Pedra\n[A] Papel\n[T] Tesoura\n");
    scanf(" %c", &jogador1);

    printf("Jogador 02, escolha uma opção:\n[P] Pedra\n[A] Papel\n[T] Tesoura\n");
    scanf(" %c", &jogador2);

    if (jogador1 == jogador2) {
        printf("Empate!\n");
    } else if ((jogador1 == 'P' || jogador1 == 'p') && (jogador2 == 'T' || jogador2 == 't')) {
        printf("Jogador 01 vence!\n");
    } else if ((jogador1 == 'A' || jogador1 == 'a') && (jogador2 == 'P' || jogador2 == 'p')) {
        printf("Jogador 01 vence!\n");
    } else if ((jogador1 == 'T' || jogador1 == 't') && (jogador2 == 'A' || jogador2 == 'a')) {
        printf("Jogador 01 vence!\n");
    } else {
        printf("Jogador 02 vence!\n");
    }

    return 0;
}