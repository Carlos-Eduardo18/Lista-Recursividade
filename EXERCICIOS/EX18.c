#include <stdio.h>

int comprimento_string(char *str) {
    if (*str == '\0')
        return 0;
    return 1 + comprimento_string(str + 1);
}

int main() {
    char texto[] = "recursivo";
    printf("Comprimento: %d\n", comprimento_string(texto));
    return 0;
}
