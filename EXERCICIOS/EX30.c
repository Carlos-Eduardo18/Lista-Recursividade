#include <stdio.h>

int contar_ocorrencias(int arr[], int n, int i, int x) {
    if (i == n)
        return 0;
    if (arr[i] == x)
        return 1 + contar_ocorrencias(arr, n, i + 1, x);
    else
        return contar_ocorrencias(arr, n, i + 1, x);
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    printf("O numero %d aparece %d vezes\n", x, contar_ocorrencias(arr, n, 0, x));
    return 0;
}
