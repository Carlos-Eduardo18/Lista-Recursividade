#include <stdio.h>

void imprimir_inverso(int arr[], int n, int i) {
    if (i < 0)
        return;
    printf("%d ", arr[i]);
    imprimir_inverso(arr, n, i - 1);
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    imprimir_inverso(arr, n, n - 1);
    printf("\n");
    return 0;
}
