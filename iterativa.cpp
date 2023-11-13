#include <stdio.h>

void decimalParaBinarioIterativo(int numero) {
        int binario[32];
    int i = 0;

    while (numero > 0) {
        binario[i] = numero % 2;
        numero = numero / 2;
        i++;
    }

            printf("O número binário correspondente é: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }

    printf("\n");
}

int main() {
    int numero;

            printf("Digite um número decimal: ");
        scanf("%d", &numero);

        decimalParaBinarioIterativo(numero);

    return 0;
}
