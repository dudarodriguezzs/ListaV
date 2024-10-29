#include <stdio.h>
#include <stdlib.h>

int* gerarProgressaoAritmetica(int n, int inicio, int razao) {
    int* array = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        array[i] = inicio + i * razao;
    }
    return array;
}

void imprimirArray(int* array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, inicio, razao;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);
    printf("Digite a razão da progressão aritmética: ");
    scanf("%d", &razao);

    int* array = gerarProgressaoAritmetica(n, inicio, razao);
    imprimirArray(array, n);
    free(array);

    int termo_fibonacci;
    printf("Digite o número n para calcular o n-ésimo termo da sequência de Fibonacci: ");
    scanf("%d", &termo_fibonacci);
    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", termo_fibonacci, fibonacci(termo_fibonacci));

    return 0;
}
