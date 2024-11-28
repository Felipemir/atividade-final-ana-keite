//codigo criado por robson felipe

#include <stdio.h>
#include <string.h>

// Função que verifica se uma letra existe na palavra
int letraExiste(char *palavra, char letra) {
    return strchr(palavra, letra) != NULL;
}

int main() {
    char palavra[100];
    char letra;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (letraExiste(palavra, letra)) {
        printf("A letra '%c' existe na palavra.\n", letra);
    } else {
        printf("A letra '%c' não existe na palavra.\n", letra);
    }

    return 0;
}