/*    Ler um valor e escrever se é positivo ou negativo (considere o valor zero como
positivo).
*/

#include <stdio.h>

int main() {
    float valor;
    printf("Digite um número: ");
    scanf("%f", &valor);
    if (valor>=0)
    {
        printf("É positivo! \n");
    }
    else
    {
        printf("É negativo! \n");
    }
};