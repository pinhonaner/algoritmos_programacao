/*    Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular
e escrever a área do retângulo. 
*/

#include <stdio.h>

int main() {
    float base, altura, area;
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("Um retângulo com base %.2f e altura %.2f tem área igual à %.2f. \n", base, altura, area);
};