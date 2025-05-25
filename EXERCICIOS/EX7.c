#include <stdio.h>
#include <string.h>

void inverter_string(char *str, int inicio, int fim) {
    if (inicio >= fim)
        return;
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inverter_string(str, inicio + 1, fim - 1);
}

int main() {
    char texto[] = "recursao";
    inverter_string(texto, 0, strlen(texto) - 1);
    printf("Invertido: %s\n", texto);
    return 0;
}
