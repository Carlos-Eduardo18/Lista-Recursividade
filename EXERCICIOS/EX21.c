#include <stdio.h>

void imprimir_combinacao(int comb[], int k) {
    printf("{");
    for (int i = 0; i < k; i++) {
        printf("%d", comb[i]);
        if (i < k - 1) printf(",");
    }
    printf("}\n");
}

void combinacoes(int arr[], int n, int k, int start, int index, int comb[]) {
    if (index == k) {
        imprimir_combinacao(comb, k);
        return;
    }
    for (int i = start; i < n; i++) {
        comb[index] = arr[i];
        combinacoes(arr, n, k, i + 1, index + 1, comb);
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    int comb[k];
    combinacoes(arr, n, k, 0, 0, comb);
    return 0;
}
