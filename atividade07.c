//codigo criado por robson felipe

#include <stdio.h>
#include <math.h>

int main() {
    double base, expoente, potencia, raizQuadrada;

    printf("Digite a base: ");
    scanf("%lf", &base);

    printf("Digite o expoente: ");
    scanf("%lf", &expoente);

    // Calcula a potência
    potencia = pow(base, expoente);

    // Calcula a raiz quadrada do resultado
    raizQuadrada = sqrt(potencia);

    printf("A potência de %.2f elevado a %.2f é: %.2f\n", base, expoente, potencia);
    printf("A raiz quadrada de %.2f é: %.2f\n", potencia, raizQuadrada);

    return 0;
}