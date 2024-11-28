//codigo criado por robson felipe

#include <stdio.h>
#include <string.h>

// Função que verifica se duas palavras são iguais
int saoIguais(char *palavra1, char *palavra2) {
    return strcmp(palavra1, palavra2) == 0;
}

int main() {
    char palavra1[100];
    char palavra2[100];

    printf("Digite a primeira palavra: ");
    fgets(palavra1, sizeof(palavra1), stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite a segunda palavra: ");
    fgets(palavra2, sizeof(palavra2), stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0'; // Remove o caractere de nova linha

    if (saoIguais(palavra1, palavra2)) {
        printf("As palavras são iguais.\n");
    } else {
        printf("As palavras são diferentes.\n");
    }

    return 0;
}