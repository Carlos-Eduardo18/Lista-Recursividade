#include <stdio.h>

void imprimir_impares(int atual, int n) {
    if (atual > n)
        return;
    printf("%d ", atual);
    imprimir_impares(atual + 2, n);
}

int main() {
    int num = 7;
    imprimir_impares(1, num);
    printf("\n");
    return 0;
}
