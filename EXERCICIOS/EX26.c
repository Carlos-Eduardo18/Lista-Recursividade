#include <stdio.h>

void imprimir_array(int arr[], int n, int i) {
    if (i == n)
        return;
    printf("%d ", arr[i]);
    imprimir_array(arr, n, i + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    imprimir_array(arr, n, 0);
    printf("\n");
    return 0;
}
