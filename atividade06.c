//codigo criado por robson felipe
#include <stdio.h>
#include <math.h>

int main() {
    double numero, raizQuadrada;

    printf("Digite um número: ");
    scanf("%lf", &numero);

    // Calcula a raiz quadrada do número
    raizQuadrada = sqrt(numero);

    printf("A raiz quadrada de %.2f é: %.2f\n", numero, raizQuadrada);

    return 0;
}