// codigo criado por robson felipe

#include <stdio.h>

// Função para imprimir "Bom dia" com o nome
void bomDia(char *nome) {
    printf("Bom dia, %s!\n", nome);
}

// Função para imprimir "Boa tarde" com o nome
void boaTarde(char *nome) {
    printf("Boa tarde, %s!\n", nome);
}

// Função para imprimir "Boa noite" com o nome
void boaNoite(char *nome) {
    printf("Boa noite, %s!\n", nome);
}

int main() {
    char nome[100]; // Variável para armazenar o nome do usuário
    int hora; // Variável para armazenar a hora do dia

    // Solicita o nome do usuário
    printf("Digite seu nome: ");
    scanf("%s", nome);

    // Solicita a hora do dia
    printf("Digite a hora do dia (0-23): ");
    scanf("%d", &hora);

    // Verifica a hora do dia e chama a função apropriada
    if (hora >= 6 && hora < 12) {
        bomDia(nome);
    } else if (hora >= 13 && hora < 18) {
        boaTarde(nome);
    } else if (hora >= 18 && hora < 24) {
        boaNoite(nome);
    } else {
        // Imprime mensagem de erro se a hora for inválida
        printf("Hora inválida!\n");
    }

    return 0;
}