#include <stdio.h>
#include <string.h>

void trocar(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permutacoes(char *str, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s\n", str);
        return;
    }
    for (int i = inicio; i <= fim; i++) {
        trocar(&str[inicio], &str[i]);
        permutacoes(str, inicio + 1, fim);
        trocar(&str[inicio], &str[i]);  // backtrack
    }
}

int main() {
    char texto[] = "abc";
    permutacoes(texto, 0, strlen(texto) - 1);
    return 0;
}
