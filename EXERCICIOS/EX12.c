#include <stdio.h>

int soma_array(int arr[], int tamanho, int i) {
    if (i == tamanho)
        return 0;
    return arr[i] + soma_array(arr, tamanho, i + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    printf("Soma do array = %d\n", soma_array(arr, tamanho, 0));
    return 0;
}
