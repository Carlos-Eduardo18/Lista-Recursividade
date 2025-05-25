#include <stdio.h>

int soma_digitos(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + soma_digitos(n / 10);
}

int main() {
    int num = 1234;
    printf("Soma dos digitos de %d = %d\n", num, soma_digitos(num));
    return 0;
}
