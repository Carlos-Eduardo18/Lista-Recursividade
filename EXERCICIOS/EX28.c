#include <stdio.h>

int contar_maiores(int arr[], int n, int i, int x) {
    if (i == n)
        return 0;
    if (arr[i] > x)
        return 1 + contar_maiores(arr, n, i + 1, x);
    else
        return contar_maiores(arr, n, i + 1, x);
}

int main() {
    int arr[] = {5, 10, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 12;
    printf("Elementos maiores que %d = %d\n", x, contar_maiores(arr, n, 0, x));
    return 0;
}
