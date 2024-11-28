//codigo criado por robson felipe

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    int result;

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove o caractere de nova linha

    // Compara as duas strings
    result = strcmp(str1, str2);

    if (result == 0) {
        printf("As strings são iguais.\n");
    } else if (result < 0) {
        printf("A primeira string é menor que a segunda.\n");
    } else {
        printf("A primeira string é maior que a segunda.\n");
    }

    return 0;
}