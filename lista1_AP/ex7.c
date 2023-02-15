/*    Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em
ordem crescente.
*/

#include <stdio.h>

int main() {
    float valor1, valor2;
    printf("Digite um valor: ");
    scanf("%f", &valor1);
    prinf("Digite outro valor: ");
    scanf("%f", &valor2);
    if (valor1>valor2) {
        printf("%f, %f.\n", valor2, valor1);
    }
    else {
        printf("%f, %f.\n", valor1, valor2);
    }
};