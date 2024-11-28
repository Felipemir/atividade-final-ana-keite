//codigo criado por robson felipe

#include <stdio.h>
#include <math.h>

int main() {
    double cateto1, cateto2, hipotenusa;

    printf("Digite o comprimento do primeiro cateto: ");
    scanf("%lf", &cateto1);

    printf("Digite o comprimento do segundo cateto: ");
    scanf("%lf", &cateto2);

    // Calcula a hipotenusa usando o teorema de Pitágoras
    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    printf("A hipotenusa do triângulo é: %.2f\n", hipotenusa);

    return 0;
}