#include <stdio.h>
#include <string.h>

int eh_palindromo(char *str, int inicio, int fim) {
    if (inicio >= fim)
        return 1;
    if (str[inicio] != str[fim])
        return 0;
    return eh_palindromo(str, inicio + 1, fim - 1);
}

int main() {
    char texto[] = "arara";
    printf("Eh palindromo? %d\n", eh_palindromo(texto, 0, strlen(texto) - 1));
    return 0;
}
