#include <stdio.h>

void imprimir_pares(int n) {
    if (n < 0)
        return;
    imprimir_pares(n - 2);
    if (n % 2 == 0)
        printf("%d ", n);
}

int main() {
    int num = 6;
    imprimir_pares(num);
    printf("\n");
    return 0;
}
