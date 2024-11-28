// codigo criado por robson felipe

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertToPigLatin(char *str) {
    int len = strlen(str);
    char firstLetter = tolower(str[0]);
    char vowels[] = "aeiou";
    int isVowel = 0;

    // Verifica se a primeira letra é uma vogal
    for (int i = 0; i < 5; i++) {
        if (firstLetter == vowels[i]) {
            isVowel = 1;
            break;
        }
    }

    if (isVowel) {
        // Se a primeira letra for uma vogal, adiciona "yay" ao final
        printf("%syay\n", str);
    } else {
        // Se a primeira letra for uma consoante, move a primeira letra para o final e adiciona "ay"
        for (int i = 1; i < len; i++) {
            printf("%c", str[i]);
        }
        printf("%cay\n", firstLetter);
    }
}

int main() {
    char str[100];

    printf("Digite uma palavra: ");
    scanf("%s", str);

    convertToPigLatin(str);

    return 0;
}