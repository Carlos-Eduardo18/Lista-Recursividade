#include <stdio.h>

int maior_elemento(int arr[], int n, int i) {
    if (i == n - 1)
        return arr[i];
    int max_rest = maior_elemento(arr, n, i + 1);
    return (arr[i] > max_rest) ? arr[i] : max_rest;
}

int main() {
    int arr[] = {3, 7, 2, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maior elemento = %d\n", maior_elemento(arr, n, 0));
    return 0;
}
