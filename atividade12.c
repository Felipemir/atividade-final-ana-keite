//codigo criado por robson felipe

#include <stdio.h>
#include <string.h>

// Função que retorna a posição de uma letra na palavra
int posicaoLetra(char *palavra, char letra) {
    char *pos = strchr(palavra, letra);
    if (pos != NULL) {
        return pos - palavra;
    } else {
        return -1; // Retorna -1 se a letra não for encontrada
    }
}

int main() {
    char palavra[100];
    char letra;
    int posicao;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    posicao = posicaoLetra(palavra, letra);

    if (posicao != -1) {
        printf("A letra '%c' está na posição %d da palavra.\n", letra, posicao);
    } else {
        printf("A letra '%c' não foi encontrada na palavra.\n", letra);
    }

    return 0;
}