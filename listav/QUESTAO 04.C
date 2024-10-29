
#include <stdio.h>

int buscaBinaria(int array[], int inicio, int fim, int x) {
    if (fim >= inicio) {
        int meio = inicio + (fim - inicio) / 2;
    
        if (array[meio] == x)
            return meio;

        if (array[meio] > x)
            return buscaBinaria(array, inicio, meio - 1, x);
    
        return buscaBinaria(array, meio + 1, fim, x);
    }
    
    return -1;
}

int main() {
    int array[] = {1, 4, 6, 9, 3, 7, 2, 8};
    int n = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    int x;
    printf("Digite um número a ser procurado: ");
    scanf("%d", &x); // Certifique-se de que essa linha está correta
    int resultado = buscaBinaria(array, 0, n - 1, x);
    if (resultado != -1)
        printf("Elemento encontrado no índice: %d\n", resultado);
    else
        printf("-1\n");
    return 0;
}
