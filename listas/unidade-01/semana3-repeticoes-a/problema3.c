#include <stdio.h>

int main() {

    int A, B;

    printf("Digite dois números inteiros diferentes (A B):\n");
    scanf("%d %d", &A, &B);

    int divisoresA = 0, divisoresB = 0;

    // divisores próprios de A
    for (int i = 1; i < A; i++) {
        if (A % i == 0) {
            divisoresA += i;
        }
    }

    // divisores próprios de B
    for (int i = 1; i < B; i++) {
        if (B % i == 0) {
            divisoresB += i;
        }
    }

    if ((divisoresA - B) <= 2 && (divisoresB - A) <= 2) {
        printf("São colegas!");
    } else {
        printf("Não são colegas!"); 
    }

    return 0;
}