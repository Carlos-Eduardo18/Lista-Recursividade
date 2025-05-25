#include <stdio.h>

int potencia(int x, int n) {
    if (n == 0)
        return 1;
    int temp = potencia(x, n / 2);
    if (n % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int main() {
    int x = 2, n = 5;
    printf("%d^%d = %d\n", x, n, potencia(x, n));
    return 0;
}
