#include <stdio.h>

int produto_array(int arr[], int n, int i) {
    if (i == n)
        return 1;
    return arr[i] * produto_array(arr, n, i + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Produto dos elementos = %d\n", produto_array(arr, n, 0));
    return 0;
}
