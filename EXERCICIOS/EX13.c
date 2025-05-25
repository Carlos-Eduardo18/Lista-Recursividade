#include <stdio.h>
#include <math.h>

int primo_rec(int n, int i) {
    if (n <= 2)
        return (n == 2) ? 1 : 0;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;
    return primo_rec(n, i + 1);
}

int eh_primo(int n) {
    return primo_rec(n, 2);
}

int main() {
    int num = 7;
    printf("%d eh primo? %d\n", num, eh_primo(num));
    num = 9;
    printf("%d eh primo? %d\n", num, eh_primo(num));
    return 0;
}
