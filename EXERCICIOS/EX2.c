#include <stdio.h>

int soma_naturais(int n) {
    if (n == 0)
        return 0;
    return n + soma_naturais(n - 1);
}

int main() {
    int num = 4;
    printf("Soma dos primeiros %d numeros = %d\n", num, soma_naturais(num));
    return 0;
}
