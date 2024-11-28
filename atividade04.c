//codigo criado por robson felipe

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double graus, radianos, tangente;

    printf("Digite um ângulo em graus: ");
    scanf("%lf", &graus);

    // Converte graus para radianos
    radianos = graus * (PI / 180.0);

    // Calcula a tangente do ângulo
    tangente = tan(radianos);

    printf("A tangente de %.2f graus é: %.2f\n", graus, tangente);

    return 0;
}