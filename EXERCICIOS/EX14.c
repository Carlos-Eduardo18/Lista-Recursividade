#include <stdio.h>

void decimal_para_binario(int n) {
    if (n == 0)
        return;
    decimal_para_binario(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num = 10;
    if (num == 0)
        printf("0");
    else
        decimal_para_binario(num);
    printf("\n");
    return 0;
}
