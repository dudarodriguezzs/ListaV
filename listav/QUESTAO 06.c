#include <stdio.h>

int maiorDeTres(int a, int b, int c) {
    int maior = a;

    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;

    return maior;
}

int main() {
    int num1, num2, num3;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("O maior dos três números é: %d\n", maiorDeTres(num1, num2, num3));
    return 0;
}