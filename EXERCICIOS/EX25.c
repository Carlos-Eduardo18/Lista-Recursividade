#include <stdio.h>

int potencia_simples(int x, int n) {
    if (n == 0)
        return 1;
    return x * potencia_simples(x, n - 1);
}

int main() {
    int x = 3, n = 4;
    printf("%d^%d = %d\n", x, n, potencia_simples(x, n));
    return 0;
}
