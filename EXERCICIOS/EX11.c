#include <stdio.h>

int conta_char(char *str, char c) {
    if (*str == '\0')
        return 0;
    if (*str == c)
        return 1 + conta_char(str + 1, c);
    else
        return conta_char(str + 1, c);
}

int main() {
    char texto[] = "abracadabra";
    char c = 'a';
    printf("O caractere '%c' aparece %d vezes\n", c, conta_char(texto, c));
    return 0;
}
