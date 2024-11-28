// codigo criado por robson felipe
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Digite uma string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove o caractere de nova linha, se presente
    str1[strcspn(str1, "\n")] = '\0';

    // Copia a string str1 para str2
    strcpy(str2, str1);

    printf("String original: %s\n", str1);
    printf("String copiada: %s\n", str2);

    return 0;
}