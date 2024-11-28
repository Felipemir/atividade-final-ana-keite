//codigo criado por robson felipe
#include <stdio.h>

// Função que verifica se o triângulo é equilátero ou escaleno
const char* tipoTriangulo(double lado1, double lado2, double lado3) {
    if (lado1 == lado2 && lado2 == lado3) {
        return "Equilátero";
    } else {
        return "Escaleno";
    }
}

int main() {
    double lado1, lado2, lado3;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%lf", &lado1);

    printf("Digite o comprimento do segundo lado: ");
    scanf("%lf", &lado2);

    printf("Digite o comprimento do terceiro lado: ");
    scanf("%lf", &lado3);

    const char* tipo = tipoTriangulo(lado1, lado2, lado3);

    printf("O triângulo é: %s\n", tipo);

    return 0;
}