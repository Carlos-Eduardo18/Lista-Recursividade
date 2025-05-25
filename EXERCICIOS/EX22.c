#include <stdio.h>

void imprimir_subconjunto(int arr[], int n, int subconj[], int tamanho) {
    printf("{");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", subconj[i]);
        if (i < tamanho - 1) printf(",");
    }
    printf("}\n");
}

void gerar_subconjuntos(int arr[], int n, int i, int subconj[], int tamanho) {
    if (i == n) {
        imprimir_subconjunto(arr, n, subconj, tamanho);
        return;
    }
    // inclui arr[i]
    subconj[tamanho] = arr[i];
    gerar_subconjuntos(arr, n, i + 1, subconj, tamanho + 1);
    // nao inclui arr[i]
    gerar_subconjuntos(arr, n, i + 1, subconj, tamanho);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int subconj[n];
    gerar_subconjuntos(arr, n, 0, subconj, 0);
    return 0;
}
