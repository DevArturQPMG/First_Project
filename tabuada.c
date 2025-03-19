#include <stdio.h>

int main() {
    int numero;

    // Leitura do número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Impressão da tabuada de 1 a 10
    printf("Tabuada de %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}