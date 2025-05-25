#include <stdio.h>

int fatorial(int n) {
    if (n == 0)
        return 1;
    return n * fatorial(n - 1);
}

int main() {
    int num = 5;
    printf("%d! = %d\n", num, fatorial(num));
    return 0;
}
