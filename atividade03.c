// codigo criado por robson felipe

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha, se presente
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    printf("O número de caracteres na string é: %d\n", length);

    return 0;
}