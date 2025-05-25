#include <stdio.h>

int soma_pares(int arr[], int n, int i) {
    if (i == n)
        return 0;
    if (arr[i] % 2 == 0)
        return arr[i] + soma_pares(arr, n, i + 1);
    else
        return soma_pares(arr, n, i + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Soma dos pares = %d\n", soma_pares(arr, n, 0));
    return 0;
}
