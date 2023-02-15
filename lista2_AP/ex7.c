/*    Faça um algoritmo que leia um número inteiro e
mostre uma mensagem indicando se este
número é par ou ímpar, e se é positivo, negativo
ou zero.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d é um número par.\n", num);
    } else {
        printf("%d é um número impar.\n", num);
    }
    if (num > 0) {
        printf("%d é positivo.\n", num);
    } else if(num) {
        printf("%d é negativo.\n", num);
    } else {
        printf("%d é igual a zero.\n");
    }
    }