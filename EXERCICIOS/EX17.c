#include <stdio.h>

int busca_array(int arr[], int tamanho, int x, int i) {
    if (i == tamanho)
        return 0;
    if (arr[i] == x)
        return 1;
    return busca_array(arr, tamanho, x, i + 1);
}

int main() {
    int arr[] = {2, 4, 6, 8};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int valor = 6;
    printf("Valor %d encontrado? %d\n", valor, busca_array(arr, tamanho, valor, 0));
    valor = 5;
    printf("Valor %d encontrado? %d\n", valor, busca_array(arr, tamanho, valor, 0));
    return 0;
}
