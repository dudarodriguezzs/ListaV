#include <stdio.h>

int somaR(int n) {
    if (n == 1) {
        return 1;
    }
    return n + somaR(n - 1);
}

int main() {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("A soma de todos os números de 1 até %d é: %d\n", n, somaR(n));
    } else {
        printf("Por favor, insira um número inteiro positivo.\n");
    }

    return 0;
}
