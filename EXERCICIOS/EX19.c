#include <stdio.h>

void torre_hanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    torre_hanoi(n - 1, origem, auxiliar, destino);
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    torre_hanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int n = 2;
    torre_hanoi(n, 'A', 'C', 'B');
    return 0;
}
