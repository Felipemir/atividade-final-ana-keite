//codigo criado por robson felipe

#include <stdio.h>
#include <string.h>

// Função que retorna a quantidade de caracteres na palavra
int contarCaracteres(char *palavra) {
    return strlen(palavra);
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    // Remove o caractere de nova linha, se presente
    palavra[strcspn(palavra, "\n")] = '\0';

    int quantidade = contarCaracteres(palavra);

    printf("A quantidade de caracteres na palavra é: %d\n", quantidade);

    return 0;
}