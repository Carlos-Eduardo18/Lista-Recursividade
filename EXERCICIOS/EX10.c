#include <stdio.h>

int multiplicar(int a, int b) {
    if (b == 0)
        return 0;
    return a + multiplicar(a, b - 1);
}

int main() {
    int a = 4, b = 5;
    printf("%d * %d = %d\n", a, b, multiplicar(a, b));
    return 0;
}
