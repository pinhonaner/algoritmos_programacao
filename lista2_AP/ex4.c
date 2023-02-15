/*    Faça um algoritmo que leia 3 números e diga se
podem ser lados de um triângulo. Observe: A, B
e C são lados de um triângulo se:
A < (B+C) e B < (C+A) e C < (A+B).
*/

#include <stdio.h>

int main() {
    int lado_1, lado_2, lado_3;
    printf("Digite o primeiro valor de lado: ");
    scanf("%d", &lado_1);
    printf("Digite o segundo valor de lado: ");
    scanf("%d", &lado_2);
    printf("Digite o terceiro valor de lado: ");
    scanf("%d", &lado_3);

    if ((lado_1 < (lado_2 + lado_3)) && (lado_2 < (lado_1 + lado_3)) && (lado_3 > (lado_1 + lado_2)))
        printf("Você tem lados de um triângulo!");
    else
        printf("Você não tem lados de um triângulo");
}